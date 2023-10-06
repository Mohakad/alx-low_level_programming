#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *string_nconcat- concatinate two string
  *@s1: first string
  *@s2: second str
  *@n: max bytes to copy
  *Return: NULL OR concatinated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *connc;

	unsigned int s1len = 0, s2len = 0;

	unsigned int i;

	if (s1 != NULL)
		for (s1len = 0; s1[s1len]; ++s1len)
			;
	if (s2 != NULL)
		for (s2len = 0; s2[s2len]; ++s2len)
			;
	if (n < s2len)
		s2len = n;
	connc = malloc(sizeof(char) * (s1len + s2len + 1));
	if (connc == NULL)
		return (NULL);
	for (i = 0; i < s1len; i++)
		connc[i] = s1[i];
	for (i = 0; i < s2len; i++)
		connc[i + s1len] = s2[i];
	connc[s1len + s2len] = '\0';
	return (connc);
}
