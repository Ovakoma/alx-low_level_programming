#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: beginning of list
 */

void free_list(list_t *head)
{
	free_list(head->next);
	free(head->str);
	free(head);
}
