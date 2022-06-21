#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * *_strstr - locates a substring.
 * @haystack: parameter holding string
 * @needle: parameter holding substring
 * Return: returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h = haystack, *n = needle;

	while (*h)
	{
		h = haystack;
		n = needle;
		while (*n)
		{
			if (*h == *n)
			{
				n++;
				h++;
			}
			else
				break;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
