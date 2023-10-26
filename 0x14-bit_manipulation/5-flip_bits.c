#include "main.h"
/*
 * flip_bits-  flip to get from one number to another
 * @n: element
 * @m: power
 * Return:  the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xp = n ^ m;

	unsigned int leng = 0;

	while (xp)
	{
		leng += xp & 1;
		xp >>= 1;
	}
	return (leng);
}
