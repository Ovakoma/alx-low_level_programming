#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: beginning of list
 */

void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
