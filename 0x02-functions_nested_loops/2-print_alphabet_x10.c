#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Description: prints alphabets in lower case 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char n;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
