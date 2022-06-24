#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of command line args
 * @argv: array of command lin args
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	int i, result = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%d\n", atoi(argv[i]));
			result *= atoi(argv[i]);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
