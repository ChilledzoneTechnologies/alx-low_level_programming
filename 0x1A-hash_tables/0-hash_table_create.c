#include "hash_tables.h"
/**
 * hash_table_create - A function that creates a hash table
 *
 * @size: size
 *
 * Return: size
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tmp;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	tmp = malloc(sizeof(hash_table_t));

	if (tmp == NULL)
		return (NULL);

	tmp->array = malloc(sizeof(hash_node_t *) * size);

	if (tmp->array == NULL)
	{
		free(tmp);
		return (NULL);
	}

	tmp->size = size;

	for (i = 0; i < size; i++)
		tmp->array[i] = NULL;

	return (tmp);
}
