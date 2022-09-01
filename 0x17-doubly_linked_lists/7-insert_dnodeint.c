#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * h: pointer to head node
 * idx: position to insert node
 * n: value to insert
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newNode;

	if (idx == 0)
		return (add_nodeint(h, n));

	while(idx != 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		idx++;
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode-prev = temp;
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
