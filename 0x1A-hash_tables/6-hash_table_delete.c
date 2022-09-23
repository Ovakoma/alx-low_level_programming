#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int idx;
    hash_node_t *tmp, *n;

    if (!ht)
        return;
    for (idx = 0; idx < ht->size; idx++)
    {
        tmp = ht->array[idx];
        while (tmp)
        {
            n = tmp->next;
            free(tmp->key);
            free(tmp->value);
            free(tmp);
            tmp = n;
        }
        free(tmp);
    }
    free(ht->array);
    free(ht);
}
