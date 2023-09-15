#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned  int new;

	if (n < 0)
	{
		_putchar('-');
		new = -n;
	}
	else
	{
		new = n;
	}
	if (new / 10)
		print_number(new / 10);

	_putchar((new % 10) + '0');


}
