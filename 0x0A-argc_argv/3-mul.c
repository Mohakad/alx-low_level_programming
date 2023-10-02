#include <stdlib.h>
#include <stdio.h>
/**
*main -  prints its name
*@argc : command no
*@argv : command list
*Return: 0 (success).
*/
int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0, mult;

	if (argc > 2)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mult = n1 * n2;
		printf("%d\n", mult);
	}
	else
		printf("Error\n");
	return (0);
}
