#include "main.h"

/**
 * rlen - returns length of string
 * @s: parameter
 * Return: length of string
 */

int rlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + rlen(s + 1));
}

/**
 * s_comp - compares each character in string.
 * @s: string
 * @n: smallest iterator
 * @n1: largest iterator
 * Return: int
 */

int s_comp(char *s, int n, int n1)
{
	if (*(s + n) == *(s + n1))
	{
		if (n == n1 || n == (n1 + 1))
				return (1);
		return (0 + s_comp(s, n + 1, n1 - 1));
	}
	return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: parameter
 * Return: int
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (s_comp(s, 0, rlen(s) - 1));
}
