#include <stdio.h>
/**
  *main- fibonachii fir 98
  *Return: 0.
  */
int main(void)
{
	long double f, s, n, count;

	f = 1;
	s = 2;
	n = f + s;
	printf("%1Lf, ", f);
	printf("%1Lf, ", s);
	for (count = 3; count <= 98; count++)
	{
		if (count == 98)
		{
			printf("%1Lf\n", n);
		}
		else
		{
			printf("%1Lf, ", n);
		}
		f = s;
		s = n;
		n = f + s;
	}
	return (0);
}
