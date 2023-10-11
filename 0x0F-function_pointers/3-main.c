#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <stddef.h>
/**
  *main- main
  *@argc: arg number
  *@argv: arguments
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int n1, n2, rs;

	int (*opf)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	opf = get_op_func(argv[2]);
	if (opf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	rs = opf(n1, n2);
	printf("%d\n", rs);
	return (0);
}
