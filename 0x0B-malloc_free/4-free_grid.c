#include "main.h"
#include <stdlib.h>
/**
  *free_grid- free memory
  *@grid: point to memory
  *@height: memory length
  *Return: void
  */
void free_grid(int **grid, int height)
{
	int index = 0;

	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}
