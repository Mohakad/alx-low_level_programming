#include "main.h"
/**
* _strstr -  locates a substring
* @haystack:str
* @needle: sub str
* Return:  pointer to the beginning of the located substring, or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s1 = haystack;

		char *s2 = needle;

		while (*s1 == *s2 && *s2 != '\0')
		{
			s2++;
			s1++;
		}
		if (*s2 == '\0')
			return (haystack);
	}
	return ('\0');
}
