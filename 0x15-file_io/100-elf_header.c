#include "main.h"
#define BUF_SIZE 1024
/**
 *show_magic - show magic bytes
 * @id: id
 */
void show_magic(unsigned char *id)
{
    int i;

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x", id[i]);
        if (i < EI_NIDENT - 1)
            printf(" ");
    }
    printf("\n");
}

/**
 *show_class - class of the ELF
 *@id: id
 */
void show_class(unsigned char *id)
{
    printf("  Class:                             ");
    switch (id[EI_CLASS])
    {
        case ELFCLASSNONE:
            printf("none\n");
            break;
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown: %x>\n", id[EI_CLASS]);
    }
}

/**
 * show_data - show data encod
 * @id: id
 */
void show_data(unsigned char *id)
{
    printf("  Data:                              ");
    switch (id[EI_DATA])
    {
        case ELFDATANONE:
            printf("none\n");
            break;
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown: %x>\n", id[EI_DATA]);
    }
}

/**
 *show_version - version of header
 *@id: id
 */
void show_version(unsigned char *id)
{
    printf("  Version:                           ");
    switch (id[EI_VERSION])
    {
        case EV_NONE:
            printf("0 (invalid)\n");
            break;
        case EV_CURRENT:
            printf("%d (current)\n", EV_CURRENT);
            break;
        default:
            printf("<unknown: %x>\n", id[EI_VERSION]);
    }
}

/**
  *show_osabi -osabi
  *@id: id
 */
void show_osabi(unsigned char *id)
{
    printf("  OS/ABI:                            ");
    switch (id[EI_OSABI])
    {
        case ELFOSABI_NONE:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("UNIX - HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_IRIX:
            printf("UNIX - IRIX\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("UNIX - FreeBSD\n");
            break;
        case ELFOSABI_TRU64:
            printf("UNIX - TRU64\n");
            break;
        case ELFOSABI_ARM:
            printf("ARM\n");
            break;
        case ELFOSABI_STANDALONE:
            printf("Standalone App\n");
            break;
        default:
            printf("<unknown: %x>\n", id[EI_OSABI]);
    }
}

/**
  *show_abiversion - abi header
  *@id: id
 */
void show_abiversion(unsigned char *id)
{
    printf("  ABI Version:                     ");
    printf("%d\n", id[EI_ABIVERSION]);
}

/**
 *show_type -type header
 *@type: type
 * @endianess: 1or2
 */
void show_type(uint16_t type, int endianess)
{
    if (endianess == ELFDATA2MSB)
        type = type << 8 | type >> 8;

    printf("  Type:                              ");
    switch (type)
    {
        case ET_NONE:
printf("NONE (None)\n");
break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown: %x>\n", type);
    }
}

/**
 *show_entry -address 
 *@entry: entry member
 *@endianess: 1 or 2
 */
void show_entry(uint64_t entry, int endianess)
{
    if (endianess == ELFDATA2MSB)
    {
        entry = (entry & 0x00000000FFFFFFFF) << 32 | (entry & 0xFFFFFFFF00000000) >> 32;
        entry = (entry & 0x0000FFFF0000FFFF) << 16 | (entry & 0xFFFF0000FFFF0000) >> 16;
        entry = (entry & 0x00FF00FF00FF00FF) << 8 | (entry & 0xFF00FF00FF00FF00) >> 8;
    }

    printf("  Entry point address:               ");
    printf("%#lx\n", entry);
}
/**
 *elf_header - header info
 *@filename: name file
 *Return: 0 success
 */
int elf_header(char *filename)
{ int fd;

	ssize_t n;

	char buf[BUF_SIZE];

	Elf64_Ehdr *header;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
        exit(98);
    }
    n = read(fd, buf, BUF_SIZE);
    if (n == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
        close(fd);
        exit(98);
    }
    header = (Elf64_Ehdr *)buf;
    if (header->e_ident[EI_MAG0] != ELFMAG0 ||
        header->e_ident[EI_MAG1] != ELFMAG1 ||
        header->e_ident[EI_MAG2] != ELFMAG2 ||
        header->e_ident[EI_MAG3] != ELFMAG3)
    {
        dprintf(STDERR_FILENO, "Error: Not an ELF file - %s\n", filename);
        close(fd);
        exit(98);
    }
    printf("ELF Header:\n");
    show_magic(header->e_ident);
    show_class(header->e_ident);
    show_data(header->e_ident);
    show_version(header->e_ident);
    show_osabi(header->e_ident);
    show_abiversion(header->e_ident);
    show_type(header->e_type, header->e_ident[EI_DATA]);
    show_entry(header->e_entry, header->e_ident[EI_DATA]);
    close(fd);
    return (0);
}
/**
 *main - elf check
 *@argc: arguments
 *@argv: arguments
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    return (elf_header(argv[1]));
}

