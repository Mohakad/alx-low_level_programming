#include <stdio.h>
/**
  *main- fibonachii fir 98
  *Return: 0.
  */
int main(void)
{
	unsigned long f, s, n;

	f = 1;
	s = 2;
	n = f + s;
	int count;

	count = 3;
	printf("%lu, ", f);
	printf("%lu, ", s);
	while (count <= 98)
	{
		if (count == 98)
		{
			printf("%lu\n", n);
		}
		else
		{
			printf("%lu, ", n);
		}
		f = s;
		s = n;
		n = f + s;
		count++;
	}
	return (0);
}
