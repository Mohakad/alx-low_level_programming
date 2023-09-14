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

	printf("%lu, ", f);
	printf("%lu, ", s);
	for (count = 3; count <= 98; count++)
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
	}
	return (0);
}
