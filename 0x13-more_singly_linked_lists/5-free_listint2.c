#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list.
 * @head: head node
 */

void free_listint2(listint_t **head)
{
	listint_t *tempNode, *newNode;

	tempNode = *head;
	if (head == NULL)
		return;
	while (tempNode != NULL)
	{
		newNode = tempNode;
		tempNode = tempNode->next;
		free(newNode);
	}
	*head = NULL;
}
