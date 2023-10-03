#include <stdlib.h>
#include "main.h"
/**
  *alloc_grid- 2 dimension arr
  *@width:width of arr
  *@height:height arr
  *Return:null or array (success)
  */
int **alloc_grid(int width, int height)
{
	int **td;

	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	td = malloc(sizeof(int *) * height);
	if (td == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		td[j] = malloc(sizeof(int) * width);
		if (td[j] == NULL)
		{
			for (; j >= 0; j--)
				free(td[j]);
			free(td);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			td[j][i] = 0;
	}
	return (td);
}
