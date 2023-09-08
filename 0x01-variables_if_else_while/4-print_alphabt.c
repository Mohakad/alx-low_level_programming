#include <stdio.h>
/**
  *main- except q and e
  *Return: return 0 (success)
  */
int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (low != 'q' && low != 'e')
		putchar(low);
		low++;
	}
	putchar('\n');
	return (0);
}
