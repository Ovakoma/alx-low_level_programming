#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to the string
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0, j = 0, len = 0;
	int k = 0, digit = 0, l = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && l == 0)
	{
		if (s[i] == '-')
			j++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			k = k * 10 + digit;
			l = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			l = 0;
		}
		i++;
	}
	if (l == 0)
		return (0);
	return (k);
}
