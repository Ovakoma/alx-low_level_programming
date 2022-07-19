#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head node address
 * @idx: position at which node will be inserted
 * @n: value to be inserted
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t)), *tempNode;

	tempNode = *head;
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = tempNode;
		*head = newNode;
		return (*head);
	}
	if (idx > 1)
	{
		tempNode = tempNode->next;
		idx--;
		if (!tempNode)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = tempNode->next;
	tempNode->next = newNode;
	return (newNode);
}
