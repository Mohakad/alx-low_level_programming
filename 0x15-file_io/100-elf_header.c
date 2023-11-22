#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
/**
 * print_header- print hd
 * @header: header
*/
void print_header(Elf64_Ehdr header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
			header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
			header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian"
			: "2's complement, big endian");
	printf("  Version:                           %d (current)\n",
			header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
			header.e_ident[EI_OSABI] == ELFOSABI_SYSV ?"UNIX - System V" : "UNIX - Other");
	printf("  ABI Version:                       %d\n",
			header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
			header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("  Entry point address:               0x%lx\n", header.e_entry);
}
/**
 * read_header-read header
 * @fd: file
 * @header: head
 * Return: 0 or 1
*/
int read_header(int fd, Elf64_Ehdr *header)
{
	if (lseek(fd, (off_t)0, SEEK_SET) == -1)
	{
		fprintf(stderr, "Error: Cannot reset file offset\n");
		return (1);
	}
	if (read(fd, header, sizeof(*header)) != sizeof(*header))
	{
		fprintf(stderr, "Error: Cannot read ELF header\n");
		return (1);
	}
	if (header->e_ident[EI_MAG0] != ELFMAG0 ||
			header->e_ident[EI_MAG1] != ELFMAG1 ||
			header->e_ident[EI_MAG2] != ELFMAG2 ||
			header->e_ident[EI_MAG3] != ELFMAG3)
	{
	fprintf(stderr, "Error: Not an ELF file\n");
	return (1);
	}
	return (0);
}
/**
 * main-elf header
 * @argc:argc
 * @argv: argv
 * Return: 0
*/
int main(int argc, char **argv)
{
	int fd;

	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "%s\n", "Error");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}
	if (read_header(fd, &header) != 0)
		exit(98);
	print_header(header);
	return (0);
}
