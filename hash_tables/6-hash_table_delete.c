#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete.
 *
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size - 1; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			hash_node_t *temp = node;

			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
}
