#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: string to append
 * @s2: string to concatenate to s1
 * @n: unsigned int
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len = 0, len1 = 0;
	char *ptr;

	for (len = 0; s1 && s1[len]; len++)
		;
	for (len1 = 0; s2 && s2[len1]; len1++)
		;
	if (n < len1)
		ptr = malloc(sizeof(char) * (len + n + 1));
	else
		ptr = malloc(sizeof(char) * (len + len1 + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = s1[i];
	while (n < len1 && i < (len + n))
		ptr[i++] = s2[j++];
	while (n >= len1 && i < (len + len1))
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
