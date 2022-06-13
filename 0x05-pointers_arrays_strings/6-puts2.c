#include "main.h"

/**
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line.
 * @str: string argument
 * Return: 0
 */

void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
