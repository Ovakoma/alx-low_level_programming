#include <stdio.h>
/**
 * main - prints all possible combinations of two-digit numbers,
 * ranging from 0-99, sepearated by a comma followed by a space.
 * Return: Always 0.
*/
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 
