#include "main.h"
/**
  * _strcat - concat 2 string
  *@dest : destinaton
  *@src : source
  *Return: void
  */
char *_strcat(char *dest, char *src)
{
	int ind1 = 0, ind2;

	while (dest[ind1] != '\0')
		ind1++;
	for (ind2 = 0; ind2 <= ind1 && src[ind2] != '\0'; ind2++)
	{
		dest[ind2 + ind1] = src[ind2];
	}
	dest[ind2 + ind1] = '\0';
	return (dest);
}
