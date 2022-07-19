#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: head node
 * @index: position of node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tempNode, *newNode;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		newNode = (*head)->next;
		free(*head);
		*head = newNode;
		return (1);
	}
	tempNode = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (tempNode->next == NULL)
			return (-1);
		tempNode = tempNode->next;
	}
	newNode = tempNode->next;
	tempNode->next = newNode->next;
	free(newNode);
	return (1);
}
