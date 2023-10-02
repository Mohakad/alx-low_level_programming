#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
*main -  prints its name
*@argc : command no
*@argv : command list
*Return: 0 (success).
*/
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(*(argv[i])))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}