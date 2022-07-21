#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted value, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int binary, len = 0;

	if (!b)
		return (0);
	while (b[len] != '\0')
		len++;
	for (len--, binary = 1; len >= 0; len--, binary *= 2)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		if (b[len] & 1)
			i += binary;
	}
	return (i);
}
