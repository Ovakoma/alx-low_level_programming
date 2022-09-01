#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: head pointer
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_no = 0;

	if (h == NULL)
		return (0);
	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		node_no++;
		h = h->next;
	}
	return (node_no);
}
