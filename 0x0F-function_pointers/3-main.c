#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple arithmetic
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: result int
 */

int main(int argc, char *argv[])
{
	op_t ptr;
	int x, y, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	ptr.f = get_op_func(argv[2]);
	if (ptr.f == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	result = ptr.f(x, y);
	if (result == 0)
	{
		printf("Error\n");
		exit(98);
	}
	else
		printf("%d\n", result);
	return (0);
}
