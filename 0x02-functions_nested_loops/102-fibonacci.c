#include <stdio.h>
/**
  *main- fabonachii
  *Return: 0.
  */
int main(void)
{
	long int f = 1;

	long int s = 2;

	long int n = 3;

	int count = 3;

	printf("%lu, ", f);
	printf("%lu, ", s);
	while (count <= 50)
	{
		if (count == 50)
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
