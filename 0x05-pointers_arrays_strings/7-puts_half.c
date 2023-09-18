#include "main.h"
/**
 * puts_half - a function that prints half
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, h, lon;

	lon = 0;
	for (a = 0; str[a] != '\0'; a++)
		lon++;
	h = (lon / 2);
	if ((lon % 2) == 1)
		h = ((lon + 1) / 2);
	for (a = h; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
