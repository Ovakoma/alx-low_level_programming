#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @str: string passed to function
 * @head: first node in list
 * Description: adds new node at end of list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *currentNode, *newNode;
	char *dup = NULL;
	size_t len;

	if (head == NULL || str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	dup = malloc(sizeof(char) * len);
	if (dup == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(dup);
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	currentNode = *head;
	while (currentNode->next != NULL)
		currentNode = currentNode->next;
	currentNode->next = newNode;
	return (*head);
}
