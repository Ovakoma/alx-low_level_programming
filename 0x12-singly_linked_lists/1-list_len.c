#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: first node of list
 * Description: returns result
 * Return: returns the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
