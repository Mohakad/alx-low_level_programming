#include <stdio.h>
/**
  *main- print alphabets
  *Return: return 0 (success)
  */
int main(void)
{
	char upper = 'A';

	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
