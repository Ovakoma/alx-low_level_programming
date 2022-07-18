#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: head node
 * Return: returns the head node’s data (n) return 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int nodeData;

	if (*head == NULL)
		return (0);
	node = *head;
	*head = node->next;
	nodeData = node->n;

	free(node);
	return (nodeData);
}
