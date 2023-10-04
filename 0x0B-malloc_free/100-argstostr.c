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
	int i, j, r = 0, len = 0;

	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len += ac;
	ar = malloc(sizeof(char) * len + 1);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ar[r] = av[i][j];
			r++;
		}
		if (ar[r] == '\0')
			ar[r++] = '\n';
	}
	return (ar);
}
