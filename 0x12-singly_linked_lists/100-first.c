#include <stdio.h>

void startbeforemain(void) __attribute__ ((constructor));
/**
 * startbeforemain - print before main call
 */
void startbeforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
