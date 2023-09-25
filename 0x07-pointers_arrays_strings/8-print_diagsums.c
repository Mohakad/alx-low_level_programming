#include <stdio.h>
#include "main.h"
/**
  * print_diagsums - print sum of 2 diagonal of square
  *@a : matrix
  *@size : size
  *Return : void
  */
void print_diagsums(int *a, int size)
{
	int i, j;

	int s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += *((int *) a + i * size + i);
	}
	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		s2 += *((int *) a + i * size + j);
	}
	printf("%d, %d\n", s1, s2);
}
