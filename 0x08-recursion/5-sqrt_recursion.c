#include "main.h"


/**
 * num_sqrt - returns natural root of positive integer.
 * @n: parameter receiving int
 * @s: number for iteration
 * Return: int
 */

int num_sqrt(int n, int s)
{
	if (s % (n / s) == 0)
	{
		if (s * (n / s) == n)
			return (s);
		return (-1);
	}
	return (0 + num_sqrt(n, s + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: parameter holding integer
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	if (n == 0)
		return (0);
	return (num_sqrt(n, 2));
}
