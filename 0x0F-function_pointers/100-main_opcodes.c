#include <stdlib.h>
#include <stdio.h>
/**
 *main -  prints the opcodes of its own main
 *@argc: arguments no
 *@argv: arguments
 *Return: 0 ok
 */
int main(int argc, char *argv[])
{
	int i = 0, b;

	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	while (i < b)
	{
		if (i == b - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
		i++;
	}
	return (0);
}
