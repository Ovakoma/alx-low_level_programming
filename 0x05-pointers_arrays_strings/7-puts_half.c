#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string argument
 * Return: 0
 */

void puts_half(char *str)
{
	char *ptr = str;
	int count = 0, i;

	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}
	for (i = 0; i <= (count - 1); i++)
	{
		if (i < count && i >= ((count) / 2) && (count % 2) == 0)
		{
			_putchar(str[i]);
		} else if ((count % 2) != 0 && i > ((count - 1) / 2) && i < count)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
