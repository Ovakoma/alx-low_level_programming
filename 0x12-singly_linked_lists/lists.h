#ifndef LIST_H
#define LIST_H
#include <stddef.h>
#include <stdlib.h>

/**
 * struct list_t - linked list
 * @str: character pointer
 * @data: data
 * @next: pointer to next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;
	
size_t print_list(const list_t *h);

#endif
