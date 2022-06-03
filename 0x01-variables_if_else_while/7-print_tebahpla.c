#include <stdio.h>
/**
 * main - prints lower alphabet in reverse.
 *
 * Return: return integer 0
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
