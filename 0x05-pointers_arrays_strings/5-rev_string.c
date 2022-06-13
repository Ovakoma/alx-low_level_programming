#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: argument containing string
 * Return: 0
 */

void rev_string(char *s)
{
	int len, i = 0;

	for (len = 0; s[len] != '\0'; len++)
	{
		i++;
	}
	for (len = i - 1; len >= 0; len--)
	{
		s[len];
	}
}
