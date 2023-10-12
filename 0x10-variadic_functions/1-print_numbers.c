#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *print_numbers- prints numbers, followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, rs = 0;

	va_list ap;
	
	if (separator == NULL)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		rs = va_arg (ap, int);
		printf("%d", rs);
		if (i < n -1)
		printf("%s", separator);
	}
	printf("\n");
}
