#include "main.h"
/**
  *_memset - set memory with conta byte
  *@s: source 
  *@:b bytes to fill
  *@n: n timees
  *Return : s 
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	while (i < n)
	{
		s[i] = b[i];
		i++;
	}
	return (s);
}
