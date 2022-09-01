#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to head node
 * @n: value to be added to list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *rNode = *head;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	if (!(*head))
	{
		*head = temp;
		return (temp);
	}

	while(rNode->next)
		rNode = rNode->next;
	rNode->next = temp;
	temp->prev = rNode;

	return (temp);

}
