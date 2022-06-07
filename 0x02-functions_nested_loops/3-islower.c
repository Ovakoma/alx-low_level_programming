#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 * @c: value to be checked by the function
 * Description: (int c) checks output for lowercase alphabets
 * Return: 1 if lower case and 0 otherwise
 */
int _islower(int c)
{
	char check;

	check = tolower(c);
	if (c != check || c == 0 || c == 20)
	{
		return (0);
	}
	if (c == check)
	{
		return (1);
	}
	return (0);
}
