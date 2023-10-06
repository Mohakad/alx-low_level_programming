#include "main.h"
#include <stdlib.h>
/**
  *_calloc- allocate memory
  *@nmemb: byte size
  *@size: allocation size
  *Return: NULL or arr
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= (nmemb * size); i++)
	ptr[i] = 0;
	return (ptr);
}
