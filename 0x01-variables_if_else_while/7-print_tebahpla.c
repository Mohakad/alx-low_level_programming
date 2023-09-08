#include <stdio.h>
/**
  *main- alpha reverse
  *Return: return 0 (success)
  */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
