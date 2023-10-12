#include "3-calc.h"
#include <stddef.h>
#include "function_pointers.h"
/**
  *get_op_func- operator given as a parameter.
  *@s:  operator passed as argument to the program
  *Return: returns a pointer to the function that corresponds to the operator
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
