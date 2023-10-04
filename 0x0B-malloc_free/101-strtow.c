#include <stdlib.h>
#include "main.h"
/**
  *cword- count words
  *@cw: argument
  *Return: no of words
  */
int cword(char *cw)
{
	int ff = 0, wdd = 0;

	int ii = 0;

	for (ii = 0; cw[ii] != '\0'; ii++)
	{
		if (cw[ii] == ' ')
			ff = 0;
		else if (ff == 0)
		{
			ff = 1;
			wdd++;
		}
	}
	return (wdd);
}
/**
  *strtow- strtrow
  *@str: arguments
  *Return: NULL or pointer
  */
char **strtow(char *str)
{
	int ln = 0, i, k = 0, wc = 0, cc = 0, st, en;

	char *tp;

	char **mt;

	while (*str)
	{
		ln++;
		str++;
	}
	int ws = cword(str);

	if (ws == 0)
		return (NULL);
	mt =(char **)  malloc(sizeof(char *) * (ws + 1));
	if (mt == NULL)
		return (NULL);
	for (i = 0; i <= ln; i++)
	{
		if (str[i] == '\0' || str[i] == ' ')
		{
			if (cc)
			{
				en = i;
				tp = (char *) malloc(sizeof(char) * (cc + 1));
				if (tp == NULL)
					return (NULL);
				while (st < en)
				{
					*tp = str[st];
					tp++;
					st++;
				}
				*tp = '\0';
				mt[k] = tp - cc;
				k++;
				cc = 0;
			}
		}
		else if (cc++ == 0)
			st = i;
	}
	mt[k] = NULL;
	return (mt);
}
