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
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
