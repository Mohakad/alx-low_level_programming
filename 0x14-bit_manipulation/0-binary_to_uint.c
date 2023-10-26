#include "main.h"
/**
  *binary_to_uint- converts a binary number to an unsigned int
  *@b: is pointing to a string of 0 and 1 chars
  *Return: the converted number, or 0 if
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int vall = 0;

	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		vall <<= 1;
		vall += b[i] - '0';
		i++;
	}
	if (b[i] != '\0')
		return (0);
	return (vall);
}
