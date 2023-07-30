#include "hash_tables.h"

hash_node_t *create_hash_node(const char *key, const char *value);
int is_new_key(hash_table_t *ht, int index, const char *key);

/**
 * hash_table_set - adds a hash node to a hash table
 * @ht: hash table
 * @key: hash key
 * @value: hash value
 *
 * Return: 1 for successful insertion, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	const unsigned char *key_copy = (const unsigned char *)key;
	hash_node_t *new;
	hash_table_t *tmp = ht;

	/* first check if key is empty or NULL */
	if (strcmp(key, "") == 0 || !key || !value)
		return (0);

	/* check if table is NULL or if the array member is NULL */
	if (!ht || !ht->array)
		return (0);

	index = key_index(key_copy, ht->size);

	/*
	 * check if key exists in hash table
	 * if key does exist then change value of key
	 */
	if (is_new_key(tmp, index, key) == 1)
	{
		while (tmp->array[index])
		{
			if (strcmp(tmp->array[index]->key, key) == 0)
			{
				int len = strlen(value) + 1;

				free(tmp->array[index]->key);
				tmp->array[index]->key = malloc(sizeof(char) * len);
				tmp->array[index]->key = (char *)value;
				break;
			}
			tmp->array[index] = tmp->array[index]->next;
		}
		return (1);
	}

	/* create a hash node for key/value pair */
	new = create_hash_node(key, value);
	if (!new)
		return (0);

	/* add new node to empty singly linked list stored under array[index] */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}

	/* add new hash node to singly linked list if not empty*/
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

/**
 * create_hash_node - creates a new hash node
 * @key: hash key
 * @value: hash value
 *
 * Return: a new hash node on success, NULL otherwise
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new;

	/* malloc space for new node */
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	/* malloc space for new node members */
	new->key = malloc(sizeof(char) * (strlen(key) + 1));
	new->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (!new->key || !new->value)
		return (NULL);
	/* malloc space for next member */
	new->next = malloc(sizeof(hash_node_t));
	if (!new->next)
		return (NULL);

	/* assign values to new hash node */
	strcpy(new->key, key);
	strcpy(new->value, value);
	new->next = NULL;

	return (new);
}

/**
 * is_new_key - checks if key already exists in singly linked list
 * @ht: hash table
 * @index: index of array where key belongs
 * @key: hash key
 *
 * Return: 1 if key exists, 0 otherwise
 */
int is_new_key(hash_table_t *ht, int index, const char *key)
{
	hash_table_t *tmp = ht;

	if (tmp->array[index] == NULL)
		return (0);

	while (tmp->array[index])
	{
		if (strcmp(tmp->array[index]->key, key) == 0)
			return (1);
		tmp->array[index] = tmp->array[index]->next;
	}
	return (0);
}
