#include "main.h"
/**
 * _isupper - checks for uppercase letters and
 * returns 1 or 0
 * @c: the values to be checked by the function
 * Return: 1 if upper and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
