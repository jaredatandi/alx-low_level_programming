#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int count = 0, i = 0;

	if (ht != NULL)
	{
		printf("{");
		for (count = 0; count < ht->size; count++)
		{
			node = ht->array[count];
			while (node != NULL)
			{
				if (i != 0)
					printf(", ");
				i = 1;
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}

		printf("}\n");
	}
}
