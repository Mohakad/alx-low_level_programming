#include <stdlib.h>
#include <stdio.h>
/**
*main -  prints arg num
*@argc : command no
*@argv : command list
*Return: 0 (success).
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
