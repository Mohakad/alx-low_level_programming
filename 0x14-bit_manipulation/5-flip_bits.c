#include "main.h"
/**
 * flip_bits- flips
 * @n: element
 * @m: power
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xp = n ^ m;

	int a, coun = 0;

	unsigned long int curr;

	for (a = 63; a >= 0; a--)
	{
		curr = xp >> a;
		if (curr & 1)
			coun++;
	}
	return (coun);
}
