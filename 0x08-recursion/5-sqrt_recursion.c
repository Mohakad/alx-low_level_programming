#include "main.h"
/**
 *_sqrt_recursion_2 -actual sqrt
 *@n :num
 *@s : start
 * Return: the resulting square root
 */
int _sqrt_recursion_2(int n, int s)
{
	if (s * s == n)
		return (s);
	if (s * s > n)
		return (-1);
	return (_sqrt_recursion_2(n, s + 1));

}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_2(n, 0));
}
