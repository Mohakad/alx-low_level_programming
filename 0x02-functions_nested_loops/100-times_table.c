#include "main.h"
/**
 *print_times_table- n times table
 *@n:input
 * Return: no return.
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j == 0)
			{
				_putchar('0' + result);
			}
			else if (result < 10)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar('0' + result);
			}
			else if (result < 100)
			{
				_putchar(44);
				_putchar(32);
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar(32);
				_putchar('0' + result / 100);
				_putchar('0' + (result / 10) % 10);
				_putchar('0' + result % 10);
			}
		}
		_putchar('\n');
	}
}
