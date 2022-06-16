#include "main.h"

/**
 * *rot13 - encodes a string using rot13.
 * @n: parameter containing string for encoding
 * Return: char
 */

char *rot13(char *n)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (n[i] == a[j])
			{
				n[i] = b[j];
				break;
			}
		}
	}
	return (n);
}
