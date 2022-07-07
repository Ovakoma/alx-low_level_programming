#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_string(va_list ap);
void print_float(va_list ap);
void print_char(va_list ap);
void print_int(va_list ap);
void print_all(const char * const format, ...);

/**
 * print_int - prints integer
 * @ap: variable argument pointing to integer
 * Return: void
 */

void print_int(va_list ap)
{
	int i;

	i = va_arg(ap, int);
	printf("%d", i);
}

/**
 * print_char - prints character
 * @ap: variable argument pointing to char
 * Return: void
 */

void print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	printf("%c", c);
}

/**
 * print_float - prints float number
 * @ap: variable argumenr pointing to float
 * Return: void
 */

void print_float(va_list ap)
{
	float i;

	i = va_arg(ap, double);
	printf("%f", i);
}

/**
 * print_string - prints string
 * @ap: variable argument pointing to string
 * Return: void
 */

void print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: a string of characters representing the argument types
 * @...: variable arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	printer_t format_f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_start(ap, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != (*format_f[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			format_f[j].print(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
