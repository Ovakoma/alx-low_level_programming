#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: pointer to n bytes of memory
 * @b: value to b printed
 * @n: max number of bytes in memory
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
