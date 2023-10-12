#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - print
 *@format: list of types of arguments
 *Return: void
 */
void print_all(const char * const format, ...)
{
	int ini = 0;

	char *string, *separator = "";

	va_list ap;

	va_start(ap, format);
	if (format)
	{
		while (format[ini])
		{
			switch (format[ini])
			{
				case 'i':
					printf("%s%d", separator, va_arg(ap, int));
					break;
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					break;
				case 's':
					string = va_arg(ap, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					ini++;
					continue;
			}
			separator = ", ";
			ini++;
		}
	}
	printf("\n");
	va_end(ap);
}
