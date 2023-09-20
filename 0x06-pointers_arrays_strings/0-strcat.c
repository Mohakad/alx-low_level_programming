#include "main.h"
/**
  * _strcat - concat 2 string
  *@dest : destinaton
  *@src : source
  *Return: void
  */
char *_strcat(char *dest, char *src)
{
	int ind1, ind2;

	ind1 = 0;

	while (dest[ind1] != '\0')
		ind1++;
	ind2 = 0;
	while (src[ind2] != '\0')
	{
		dest[ind1] = src[ind2];
		ind1++;
		ind2++;
	}
	dest[ind1] = '\0';
	return (dest);
}
