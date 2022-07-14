#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - gets length of string
 * str: string passed to function
 * Return: length of sting
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

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
	int i = 0, len;
	char *newString;

	if (head == NULL || str == NULL)
		return (NULL);
	len = _strlen(str);
	node = *head;

	newString = malloc(sizeof(char) * len + 1);
	if (newString == NULL)
		return (NULL);
	while (str[i])
	{
		newString[i] = str[i];
		i++;
	}
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(newString);
		return (NULL);
	}
	node->len = len;
	node->str = newString;
	node->next = *head;
	*head = node;
	return (node);
}
