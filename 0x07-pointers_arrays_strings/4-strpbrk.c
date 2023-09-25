#include "main.h"
/**
 * _strpbrk - search any set byte
 * @s: source
 * @accept: compare to
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*(s++))
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return ('\0');
}
