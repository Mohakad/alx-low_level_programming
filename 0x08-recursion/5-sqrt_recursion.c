#include "main.h"
/**
 *_sqrt_recursion_2 -actual sqrt
 *@n :num
 *@start : start
 *@end : en
 * Return: the resulting square root
 */
int _sqrt_recursion_2(int n, int start, int end)
{
	int mid;

	int square;

	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;
	square = mid * mid;
	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
		return (_sqrt_recursion_2(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_recursion_2(n, mid + 1, end));
	}
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
	return (_sqrt_recursion_2(n, 0, n));
}
