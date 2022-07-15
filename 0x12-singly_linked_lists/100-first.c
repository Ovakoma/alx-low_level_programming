#include <stdio.h>

/**
 * _p - prints from init by the loader befor main
 */

void _p(void)__attribute__ ((constructor));
void _p(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
