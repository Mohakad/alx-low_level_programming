#include "main.h"
/**
 *reverse_array - reverse array of integers
 *@a: array
 * @n: number of elements of array
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int ind;

	int rev;

	for (ind = 0; ind < n; ind++)
	{
		n--;
		rev = a[ind];
		a[ind] = a[n];
		a[n] = rev;
	}
}
