#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * head: pointer to head pointer
 * n: value to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;
	temp = malloc(sizeof(dlistint_t));

	if (!*head)
		return (NULL);

		temp->n = n;
		temp->prev = NULL;
		temp->next = *head;

	if (*head)
		(*head)->prev = temp;
	*head = temp;

	return (temp);
}
