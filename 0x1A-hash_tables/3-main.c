#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
	printf("One\n");
    hash_table_set(ht, "mentioner", "cool");
	printf("two\n");
	hash_table_set(ht, "hetairas", "cool");
	printf("three\n");
	hash_table_set(ht, "hetairas", "cool");
    return (EXIT_SUCCESS);
}
