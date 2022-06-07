#include "main.h"
#include <ctype.h>
/**
 * _isalpha - To check alphabetic characters
 * @c: value to be checked by the function
 * Description: checks for alphabetic characters
 * Return: return integer 0
 */
int _isalpha(int c)
{
	int check;

	check = isalpha(c);
	if (check  != 0)
	{
		return (1);
	}
	if (check == 0)
	{
		return (0);
	}
	return (0);
}
