#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table to look into
 * @key: key being looked up
 * Return: value associated with element, or NULL if key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *tmp;

    if (!ht || !key)
        return (NULL);
    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[index];
    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            return (tmp->value);
        }
        tmp = tmp->next;
    }
    return NULL;
}
