#include <stdio.h>
/**
  *main- two digit number combination
  *Return: return 0 (success)
  */
int main(void)
{
	int firstd = 0;

	int secd = 1;

	int count = 1;

	while (firstd <= 8)
	{
		putchar(firstd + '0');
		putchar(secd + '0');
		secd++;
		if (secd > 9)
		{
			count++;
			secd = count;
			firstd++;
		}
		if (count <= 9)
		{
		putchar(',');
		putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
