#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx, FLAG = 0;
	hash_node_t *tmp;

	if (ht != NULL)
	{
		printf("{");
		for (idx = 0; idx < ht->size; idx++)
		{
			tmp = ht->array[idx];
			while (tmp)
			{
				if (FLAG != 0)
					printf(", ");
				FLAG = 1;
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
