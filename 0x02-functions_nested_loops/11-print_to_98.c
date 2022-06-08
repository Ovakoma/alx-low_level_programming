#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: the start of the range of numbers to be printed
 * Return: return range of numbers
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf("%c", ',');
			printf("%c", ' ');
			n++;
		}
		printf("%c", '\n');

	} else
	{
		int b = n;

		while (b >= 98)
		{
			printf("%d", b);
			if (b == 98)
				break;
			printf("%c", ',');
			printf("%c", ' ');
			b--;
		}
		printf("%c", '\n');
	}
}
