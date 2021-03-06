#ifndef HASH_H
#define HASH_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
 * @key : The key, string
 * The key is unique in the HashTable
 * 
 * @value : The value corresponding to a key
 * 
 * @next : A pointer to the next node of the list
 */
typedef struct hash_node_s
{
  char *key;
  char *value;
  struct hash_node_s *next;
} hash_node_t;

/*
 * @size: The size of the array
 * 
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
  unsigned long int size;
  hash_node_t **array;
} hash_table_t;


hash_table_t *hash_table_create(unsigned long int size);
#endif
