#include "main.h"
/**
 * string_toupper - lowercase to uppercase
 *@n: array
 *Return: n
 */
char *string_toupper(char *n)
{
	int index = 0;

	while (n[index] != '\0')
	{
		if (n[index] >= 'a' && n[index] <= 'z')
		{
			n[index] -= 32;
		}
		index++;
	}
	return (n);
}
