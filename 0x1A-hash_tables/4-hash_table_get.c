#include "hash_tables.h"
/**
 *hash_table_get- Retrieve the value associated with key
 *@ht: hash table
 *@key: key you are looking for
 *Return: key or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;

	hash_node_t *new;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	ind = key_index((const unsigned char *)key, ht->size);
	if (ind >= ht->size)
		return (NULL);
	new = ht->array[ind];
	while (new && strcmp(new->key, key) != 0)
		new = new->next;
	return ((new == NULL) ? NULL : new->value);
}
