#include "main.h"
#include <stdlib.h>

/**
 * word_count - counts number of words n a string
 * @str: string to evaluate
 * Return: number of words
 */

int word_count(char *str)
{
	int i = 0, j, k = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			k++;
		}
	}
	return (k);
}

/**
 * **strtow - splits a string into words.
 * @str: string
 * Return: pointer to an array of strings (words) or NULL
 */

char **strtow(char *str)
{
	char **ptr, *tmp;
	int i, j = 0, k = 0, len = 0, words, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);
	ptr = (char **)malloc((words + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				end = i;
				tmp = (char *)malloc((k + 1) * sizeof(char));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				ptr[j] = tmp - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			start = i;
	}
	ptr[j] = NULL;
	return (ptr);
}
