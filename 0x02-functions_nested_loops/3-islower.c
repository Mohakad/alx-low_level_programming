#include "main.h"
/**
 *_islower - checks is lowercase c
 *Return: 1 if is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
