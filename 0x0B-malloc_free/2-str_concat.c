#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 *str_concat - two string concatination
 * @s1: first str
 * @s2: second str
 * Return: null or pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;

	int ind1 = 0, ind2 = 0;

	int sum;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[ind1] != '\0')
		ind1++;
	while (s2[ind2] != '\0')
		ind2++;
	sum = ind1 + ind2 + 1;
	dest = malloc(sizeof(char) * sum);
	if (dest == NULL)
		return (NULL);
	ind2 = 0, ind1 = 0;
	while (s1[ind1] != '\0')
	{
		dest[ind1] = s1[ind1];
		ind1++;
	}
	while (s2[ind2] != '\n')
	{
		dest[ind1] = s2[ind2];
		ind1++, ind2++;
	}
	dest[ind1] = '\0';
	return (dest);
}
