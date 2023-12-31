#include "main.h"
/**
  *is_prime_2 -if a number is prime recursively
  * @n: number to evaluate
  * @i: iterator
  * Return: 1 if n is prime, 0 if not
  */
int is_prime_2(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime_2(n, i - 1));
}
/**
 * is_prime_number - says if an integer is a prime number
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_2(n, n - 1));
}
