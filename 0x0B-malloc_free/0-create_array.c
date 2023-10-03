#include "main.h"
#include <stdlib.h>
/**
  *create_array- create array
  *@size: size
  *@c: character
  *Return: NULL or 0
  */
char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i = 0;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
