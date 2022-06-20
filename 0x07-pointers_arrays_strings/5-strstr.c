#include "main.h"

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

	while (*h != '\0')
	{
		h = haystack;
		n = needle;
		while (*h != '\0' && *n != '\0' && *h != *n)
		{
			h++;
			n++;
		}
		if (!*n)
			return (h);
		haystack = h + 1;
	}
	return (0);
}


