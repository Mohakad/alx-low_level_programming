#include <stdio.h>
/**
  *main- print single digit combination
  *Return: return 0 (success)
  */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		if (num < 9)
		{
		putchar(',');
		putchar(' ');
		}
		else
		{
			putchar('\n');
		}
		num++;
	}
	return (0);

}
