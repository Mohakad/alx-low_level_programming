#include <stdio.h>
/**
  *main- print three digit number combin
  *Return: return 0 (success)
  */
int main(void)
{
	int n1 = 0;

	int n2 = 1;

	int n3 = 2;

	int cou = 2;

	int cou2 = 1;

	while (n1 <= 7)
	{
		putchar(n1 + '0');
		putchar(n2 + '0');
		putchar(n3 + '0');
		if (n1 <= 7)
		{
			putchar(',');
			putchar(' ');
		}
		n3++;
		if (n3 > 9)
		{
			n2++;
			cou++;
			n3 = cou;
		}
		if (n2 > 8)
		{
			n1++;
			cou2++;
			n2 = cou2;
			n3 = cou;
		}
	}
	return (0);
}
