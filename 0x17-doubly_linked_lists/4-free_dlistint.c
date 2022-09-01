#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (!head)
		return;

	while(head->prev)
		head= head->prev;

	while(head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
