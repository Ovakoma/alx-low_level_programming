#include "main.h"
/**
 * print_line - print the shortest distance between two points
 * @n: argument for the function
 * Description: print out the required result
 * Return: return void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n >= 0)
		{
			_putchar('_');
		} else if (n <= 0)
		{
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
