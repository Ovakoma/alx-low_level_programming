#include "main.h"

/**
 * _isdigit - checks for digit and returns 0 or 1
 * @c: the value to be checked
 * Return: returns 1 if digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
