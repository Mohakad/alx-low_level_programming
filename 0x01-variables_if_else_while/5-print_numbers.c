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
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
