#include "main.h"
/**
  *create_file- create file
  *@filename: name
  *@text_content: to write
  *Return: 1 or -1
  */
int create_file(const char *filename, char *text_content)
{
	int fd;

	ssize_t l = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[l])
			l++;
		if (write(fd, text_content, l) != l)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
