#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a 
 * dlistint_t linked list.
 * @head: pointer to head node
 * Return: sum of all data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while(head->prev)
		head = head->prev;

	while(head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
