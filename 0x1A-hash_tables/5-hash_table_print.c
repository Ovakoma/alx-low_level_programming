#include "hash_tables.h"

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
        print("{");
        for (idx = 0; idx < ht->size; idx++)
        {
            tmp = ht->array[idx];
            while (tmp)
            {
                if (FLAG != 0)
                    print(", ");
                FLAG = 1;
                print("'%s': '%s'", tmp->key, tmp->value);
                tmp = tmp->next;
            }
        }
        print("}\n");
    }
}
