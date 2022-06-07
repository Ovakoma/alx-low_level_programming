#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: the start of the range of numbers to be printed
 * Return: return range of numbers
 */
void print_to_98(int n)
{
	int s = 98;

	for (n = n; n <= s; n++)
	{
		printf("%d\n", n);
	}
	for (n = n; n >= s; n--)
	{
		printf("%d\n", n);
	}
}
