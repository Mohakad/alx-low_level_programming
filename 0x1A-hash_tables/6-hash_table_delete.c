#include "hash_tables.h"
/**
 *hash_table_delete - deletes a hash table
 *@ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *temp2;

	unsigned long int i = 0;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			temp2 = temp;
			temp = temp->next;
			if (temp2->key)
				free(temp2->key);
			if (temp2->value)
				free(temp2->value);
			free(temp2);
		}
	}
	free(ht->array);
	free(ht);
}
