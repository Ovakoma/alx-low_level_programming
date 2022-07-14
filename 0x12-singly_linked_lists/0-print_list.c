#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: first node
 * Description: prints elements of list
 * Return: unsigned int
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *t = NULL;

	if (h == NULL)
		return (0);
	t = h;

	while (t != NULL)
	{
		if (t->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", t->len, t->str);
		t = t->next;
		i++;
	}
	return (i);
}
