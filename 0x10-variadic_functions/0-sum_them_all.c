#include "variadic_functions.h"
#include <stdarg.h>
/**
  *sum_them_all- sum n times
  *@n: number of arguments
  *Return: sum or 0
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum_all = 0;

	va_list list_sum;

	unsigned int ind;

	va_start(list_sum, n);

	for (ind = 0; ind < n; ind++)
		sum_all = sum_all + va_arg(list_sum, int);
	va_end(list_sum);
	return (sum_all);
}
