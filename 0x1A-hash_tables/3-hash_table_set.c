#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table.
 * @ht: hash table to add or update the key/value to
 * @key: key, cannot be an empty string
 * @value: value associated with the key.
 * Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *tmp, *newNode = NULL;
    char *dup;

    if (!ht && (ht->array == NULL) && key == NULL)
        return (0);
    tmp = malloc(sizeof(hash_node_t));
    if (!tmp)
        return (0);
    index = key_index((const unsigned char *)key, ht->size);
    tmp = ht->array[index];
    while (tmp)
    {
        if (strcmp(tmp->key,key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            return (1);
        }
        tmp = tmp->next;
    }
    tmp = ht->array[index];
    newNode = malloc(sizeof(hash_node_t));
    if (newNode != NULL)
    {
        newNode->key = strdup(key);
        newNode->value = strdup(value);
        newNode->next = ht->array[index];
        ht->array[index] = newNode;
        return (1);
    }
    return (0);
}
