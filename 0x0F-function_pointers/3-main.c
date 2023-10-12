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
int main(int argc, char *argv[])
{
	int num1, num2, calc;

	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if (operator == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	calc = get_op_func(operator)(num1, num2);
	printf("%d\n", calc);
	return (0);
}
