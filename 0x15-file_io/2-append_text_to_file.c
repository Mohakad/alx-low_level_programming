#include "main.h"
/**
  *append_text_to_file- append_text_to_file
  *@filename: name of file
  *@text_content: content to append
  *Return: 1 or -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fil;

	ssize_t l = 0;

	if (!filename)
		return (-1);
	fil = open(filename, O_WRONLY | O_APPEND);
	if (fil == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[l])
			l++;
		if (write(fil, text_content, l) != l)
		{
			close(fil);
			return (-1);
		}
	}
	close(fil);
	return (1);
}
