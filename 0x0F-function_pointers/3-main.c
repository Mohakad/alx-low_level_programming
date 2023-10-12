#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <stddef.h>
#include "function_pointers.h"
/**
  *main- main
  *@argc: arg number
  *@argv: arguments
  *Return: 0
  */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2, calc;

	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);
	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	calc = operator(num1, num2);
	printf("%d\n", calc);
	return (0);
}
