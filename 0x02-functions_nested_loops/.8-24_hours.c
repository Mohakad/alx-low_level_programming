#include "main.h"
/**
 * jack_bauer - check the code
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
            		_putchar(hour / 10 + '0');
            		_putchar(hour % 10 + '0');
            		_putchar(58);
            		_putchar(minute / 10 + '0');
            		_putchar(minute % 10 + '0');
            		_putchar('\n');
       		 }
    	}
}
