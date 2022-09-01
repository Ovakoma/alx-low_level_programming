#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head pointer
 * index: index of node starting from 0
 * Return: if !node return NULL, else return nth node address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while(head->prev)
		head = head->prev;

	while(head)
	{
		if (i  = index)
			return head;
		i++;
		head = head->next;
	}
	return (NULL);
}
