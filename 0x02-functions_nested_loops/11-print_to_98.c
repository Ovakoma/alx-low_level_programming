#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: the start of the range of numbers to be printed
 * Return: return range of numbers
 */
void print_to_98(int n)
{
	for (int s = n; s < 99; s++)
	{
		printf("%d, ", s);
	}
	for (int s = n; s > 97; s--)
	{
		printf("%d, ", s);
	}
}
