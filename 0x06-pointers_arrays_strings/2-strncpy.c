#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 * @dest: first argument
 * @src: second argument
 * @n: size of the string
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && src[i] < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
