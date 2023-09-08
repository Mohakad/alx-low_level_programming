#include <stdio.h>
/**
  *main- print 0 to 9
  *Return: return 0 (success)
  */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
