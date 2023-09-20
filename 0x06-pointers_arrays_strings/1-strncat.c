#include "main.h"
/**
  *_strncat - concatinate two string
  *@dest: destination str
  *@src: copy from
  *@n: bytes to copy
  *Return: void
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0, len2 = 0;

	while (dest[len] != '\0')
		len++;
	while (src[len2] != '\0')
		len2++;
	if (len2 > n)
	{
		while (i < n)
		{
			dest[len] = src[i];
			i++;
			len++;
		}
	}
	else
	{
		while (i < len2)
		{
			dest[len] = src[i];
			i++;
			len++;
		}
	}
	dest[len] = '\0';
	return (dest);
}
