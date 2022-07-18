#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head node
 * @n: integer data to b added
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (head == NULL || newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
