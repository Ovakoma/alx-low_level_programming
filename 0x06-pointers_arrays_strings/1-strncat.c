#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 * @dest: first argument
 * @src: second argument
 * @n: maximum number of bytes
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*dest != '\0')
	{
		i++;
	}
	while (*src != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
