#include "main.h"
/**
 * _strchr - string
 * @s: input
 * @c: input
 * Return: char or null (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
