#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: first node
 * Return: unsigned int
 */

size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *t;

	t = h;

	if (t->str == NULL)
		printf("[0] (nil)\n");
	for (i = 0; t != NULL; i++)
	{
		printf("[%d] %s\n", t->len, t->str);
		t = t->next;
	}
	return (i);
}
