#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: argument containing array variable name
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, val;

	for (i = 0; i < n--; i++)
	{
		val = a[i];
		a[i] = a[n];
		a[n] = val;
	}
}
