#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: argument for string
 * Return: integer
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i += 1;
	}
	return (i);
}
