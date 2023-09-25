#include "main.h"
/**
  *_memset - set memory with conta byte
  *@s: source
  *@b: bytes to fill
  *@n: n timees
  * Return: return pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
