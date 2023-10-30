#include "main.h"
/**
  *read_textfile- reads a text file and prints it.
  *@filename: file name
  *@letters: number of letters it print
  *Return: NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fr, fw;

	int f;

	char *fil;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	fil = malloc(sizeof(char) * letters);
	if (fil == NULL)
	{
		close(f);
		return (0);
	}
	fr = read(f, fil, letters);
	close(f);
	if (fr == -1)
		return (0);
	fw = write(STDOUT_FILENO, fil, fr);
	free(fil);
	close(f);
	return (fw);
}
