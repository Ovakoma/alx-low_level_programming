#include "main.h"

/**
 * * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*dest != '\0')
	{
		i++;
	}
	while (*src != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
