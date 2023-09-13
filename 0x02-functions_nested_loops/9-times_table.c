#include "main.h"
/**
 * times_table - check the code
 *
 * Return: no return.
 */
void times_table(void)
{
	int i, j, u, d, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (result > 9)
			{
				u = result % 10;
				d = (result - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(d + '0');
				_putchar(u + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
