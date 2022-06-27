#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: an argument to program
 * @av: pointer to pointer
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 1;
	char *ptr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len += 1;
		len += 1;
	}
	k = 0;
	ptr = malloc(len * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	if (ptr != NULL)
		return (ptr);
	else
		return (NULL);
}
