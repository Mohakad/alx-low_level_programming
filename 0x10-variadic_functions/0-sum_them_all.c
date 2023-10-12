#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sum_them_all- sum n times
  *@n: number of arguments
  *Return: sum or 0
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int ind;

	int sum_all = 0;

	va_list list_sum;

	va_start(list_sum, n);
	for (i = 0; i < n; i++)
		sum_all += va_arg(list_sum, int);
	va_end(list_sum);
	return (sum_all);
}
