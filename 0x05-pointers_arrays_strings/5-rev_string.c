#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: argument containing string
 * Return: 0
 */

void rev_string(char *s)
{
	char del;
	int len = 0, i, len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		del = s[i];
		s[i] = s[len1];
		s[len1--] = del;
	}
}
