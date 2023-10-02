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
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
