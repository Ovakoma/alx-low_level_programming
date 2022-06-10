#include "main.h"
/**
 * print_numbers - prints a range of numbers with a new line
 * Return: void
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
