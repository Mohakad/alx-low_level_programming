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
		putchar(',');
		putchar(' ');
		num++;
	}
	return (0);

}
