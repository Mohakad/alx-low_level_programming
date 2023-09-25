#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: sourse
 *@n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
