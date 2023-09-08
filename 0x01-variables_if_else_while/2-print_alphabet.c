#include <stdio.h>
/**
  *main - put alphabetic words
  *Return: retun 0 (success)
  */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
