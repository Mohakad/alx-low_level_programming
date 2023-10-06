#include "main.h"
#include <stdlib.h>
/**
  *_realloc- relocate block
  *@ptr: previousl allocated memory
  *@old_size: ptrs alocatted size
  *@new_size: new size
  *Return: null or relocated
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;

	char *newp, *ptr2 = ptr;

	int ns = new_size;

	if (new_size > old_size)
		ns = old_size;
	else if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		newp = malloc(new_size);
		return (newp);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	newp = malloc(new_size);
	if (newp == NULL)
		return (NULL);
	for (i = 0; i < ns; i++)
		newp[i] = ptr2[i];
	free(ptr);
	return (newp);
}
