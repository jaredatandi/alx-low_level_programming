#include "hash_tables.h"

/**
 * key_index - generates the key using the djb2 algo
 * @key: the hash key
 * @size: size of the array table
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
