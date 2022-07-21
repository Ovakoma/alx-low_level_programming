#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to value
 * @index: index of bit starting from 0
 * Return: 1(Success), -1(Error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n =  *n & ~(1 << index);
	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}
