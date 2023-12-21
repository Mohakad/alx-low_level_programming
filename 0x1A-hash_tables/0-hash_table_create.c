#include "hash_tables.h"

/**
 *hash_table_create - create hash table
 *@size: size of array
 *Return: new hash or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;

	if (size == 0)
		return (NULL);
	htable = calloc(1, sizeof(hash_table_t));
	if (htable == NULL)
		return (NULL);
	htable->size = size;
	htable->array = calloc(size, sizeof(hash_node_t *));
	if (htable->array == NULL)
	{
		free(htable);
		return (NULL);
	}
	return (htable);
}
