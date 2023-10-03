#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char point
 * Return: null or pointer (success)
 */
char *_strdup(char *str)
{
	char *arr;

	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	arr = malloc(sizeof(char) * (i + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		arr[i] = str[i];
	return (arr);
}
