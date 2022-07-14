#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - gets length of string
 * @str: string passed to function
 * Return: length of string
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * _strdup - duplicates a string and stores it in memory
 * @src: source function
 * Return: pointer to memory withb copied string
 */

void *_strdup(const char *src)
{
	int i, len;
	char *dest;

	len = _strlen(src);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @str: string passed to function
 * @head: first node in list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *currentNode, *newNode;
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = _strdup(str);
	if (dup == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = dup;
	newNode->len = _strlen(str);
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
