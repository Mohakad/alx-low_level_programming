#include "main.h"
/**
 * _strspn - first match
 * @s: string
 * @accept: accepted
 * Return: length (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	const char *c1;

	int i = 0;

	while (*s)
	{
		for (c1 = accept; *c1; c1++)
		{
			if (*s == *c1)
				break;
		}
		if (*c1 == '\0')
			break;
		s++;
		i++;
	}
	return (i);
}
