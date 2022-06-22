#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: first argument
 * @y: second argument
 * Return: -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y % 2 == 0)
		return (_pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
	return (x * _pow_recursion(x, y / 2) * _pow_recursion(x, y / 2));
}
