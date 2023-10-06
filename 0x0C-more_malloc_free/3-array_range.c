#include "main.h"
#include <stdlib.h>
/**
  *array_range- create array intigers
  *@min: minimum
  *@max: maximum
  *Return: NULL or arr int
  */
int *array_range(int min, int max)
{
	int *arr;

	int i = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
