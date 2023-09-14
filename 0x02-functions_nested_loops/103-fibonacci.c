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

	long int sum = 0;

	while (sum < 4000000)
	{
		if ((s % 2 == 0) && (s < 4000000))
		{
			sum += s;
		}
		f = s;
		s = n;
		n = f + s;
	}
	printf("%lu\n", sum);

	return (0);
}
