#include "main.h"
#include <stdlib.h>
/**
  *argstostr- concatinate arguments
  *@ac: argument length
  *@av: arguments
  *Return: null or pointer
  */
char *argstostr(int ac, char **av)
{
	char *con;

	int i;

	if (ac == 0 || av == NULL)
		return (NULL);
	con = malloc(sizeof(av) * ac);

	if (con == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		con[i] = *av[i];
	}
	return (con);
}
