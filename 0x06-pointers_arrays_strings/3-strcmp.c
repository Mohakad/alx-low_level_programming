#include "main.h"
/**
 *_strcmp- compare strings
 * @s1: 1st strin
 * @s2: second string
 *Return: 0 or othe
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	do {
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	} while (s1[i] == s2[i]);
	return (s1[i] - s2[i]);
}
