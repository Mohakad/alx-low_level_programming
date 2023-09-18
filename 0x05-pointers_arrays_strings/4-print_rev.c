#include "main.h"
/**
 * print_rev -reverse string
 *@s: string
 * return: 0
 */
void print_rev(char *s)
{
	int l = 0;

	int size = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (size = l; size > 0; size--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
