#include <stdio.h>
#include <ctype.h>
/**
 * main - all codes
 *
 * Description: prints alphabets in lowercase followed by newline
 *
 * Return: return integer value 0
*/
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
