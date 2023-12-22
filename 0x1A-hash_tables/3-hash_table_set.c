#include "hash_tables.h"
/**
 *hash_table_set- adds an element to the hash table
 *@ht: hash table you want to add or update
 *@key: key
 *@value: value associated with the key
 *Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;

	char *vc, *kc;

	hash_node_t *b, *new;

	if (!ht || !key || !*key || !value)
		return (0);
	vc = strdup(value);
	if (!vc)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	b = ht->array[i];
	while (b)
	{
		if (!strcmp(key, b->key))
		{
			free(b->value);
			b->value = vc;
			return (1);
		}
		b = b->next;
	}
	new = calloc(1, sizeof(hash_node_t));
	if (new == NULL)
	{
		free(vc);
		return (0);
	}
	kc = strdup(key);
	if (!kc)
		return (0);
	new->key = kc;
	new->value = vc;
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
