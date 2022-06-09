#include "main.h"

/**
 * more_numbers - prints from 0 to 14 10 times
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int m;

	for (m = 0; m <= 10; m++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
