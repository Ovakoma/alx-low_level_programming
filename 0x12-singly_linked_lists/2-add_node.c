#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: head node
 * @str: string to function
 * Description: adds new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node = NULL;
	int len;
	char *newString = NULL;

	if (head == NULL && str == NULL)
		return (NULL);
	while (strlen(str) != '\0')
		len++;
	newString = malloc(sizeof(char) * len + 1);
	if (newString == NULL)
		return (NULL);
	newString = strdup(str);
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(newString);
		free(node);
		return (NULL);
	}
	node->len = len;
	node->str = newString;
	node->next = *head;
	*head = node;
	return (node);
}
