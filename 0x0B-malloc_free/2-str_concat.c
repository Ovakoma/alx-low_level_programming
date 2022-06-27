#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first parameter
 * @s2: second parameter
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	ptr = malloc((i + j + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	i = 0;
	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		ptr[i++] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
