#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	ptr = malloc(i * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		ptr[j] = str[j];
	return (ptr);
}
