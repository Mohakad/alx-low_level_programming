#include "main.h"
/**
  *openfl- open file
  *@f_from: source
  *@f_to: destination
  *@file_fr: string source
  *@file_to: string dest
  *Return: 0 or 98,99
  */
int openfl(int *f_from, int *f_to, char *file_fr, char *file_to)
{
	*f_from = open(file_fr, O_RDONLY);
	if (*f_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_fr);
		return (98);
	}
	*f_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (*f_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		return (99);
	}
	return (0);
}
/**
  *fl_copy- copy from file to file
  *@f_from: source
  *@f_to: destination
  *Return: 0 or 98 99
  */
int fl_copy(int f_from, int f_to)
{
	char buffer[1024];

	ssize_t brd, bw;

	while ((brd = read(f_from, buffer, 1024)) > 0)
	{
		bw = write(f_to, buffer, brd);
		if (bw != brd)
		{
			dprintf(2, "Error: Can't write to fd %d\n", f_to);
			return (99);
		}
	}
	if (brd == -1)
	{
		dprintf(2, "Error: Can't read from fd %d\n", f_from);
		return (98);
	}
	return (0);
}
/**
  *main- copy b/n files
  *@argc: length
  *@argv: argument
  *Return: 0 success
  */
int main(int argc, char *argv[])
{
	int f_from, f_to, status;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_fr file_to\n", argv[0]);
		exit(97);
	}
	status = openfl(&f_from, &f_to, argv[1], argv[2]);
	if (status != 0)
		exit(status);
	status = fl_copy(f_from, f_to);
	if (status != 0)
		exit(status);
	if (close(f_from) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	if (close(f_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}
	return (0);
}
