#include "main.h"
/**
 * print_number - char to int
 * @n: integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int neg;

	neg = n;
	if (n < 0)
	{
		_putchar('-');
		neg = -n;
	}
	if (neg / 10 != 0)
	{
		print_number(neg / 10);
	}
	_putchar((neg % 10) + '0');
}
