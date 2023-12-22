#include "hash_tables.h"
/**
 * hash_table_print - Print hash
 * @ht: to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;

	hash_node_t *temp;

	int fl = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if (fl)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			fl = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
