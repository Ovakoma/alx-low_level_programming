#include <stdio.h>

/**
 * main - prints largest factor of number in variable n
 * followed by new line
 * Description: prints result
 * Return: always 0 (Sucess)
 */

int main(void)
{
	long long int n, prime, i;

	n = 612852475143;
	prime = 0;
	i = 2;

	while (n != 1)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				printf("%lld\t", i);
				n /= i;
			}
			prime = i;
		}
		i++;
	}
	printf("\n\nThe largest prime factor is: %lld\n\n", prime);
	return (0);
}
