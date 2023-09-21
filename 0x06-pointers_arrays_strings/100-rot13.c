#include "main.h"
/**
  *rot13 - encryter using rot13
  *@s : string to enc
  * Return: encrypted string
  */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
		{
			s[i] += 13;
		}
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
		{
				s[i] -= 13;
		}
	}
	return (s);
}
