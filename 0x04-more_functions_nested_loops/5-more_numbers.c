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
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
	}
	_putchar('\n');
}
