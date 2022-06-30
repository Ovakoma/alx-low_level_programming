#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with constant byte
 * @str: memory area to be filled
 * @s: char to copy
 * @n: number of times to copy char s
 * Return: pointer to memory area
 */

char *_memset(char *str, char s, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		str[i] = s;
	return (str);
}

/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
