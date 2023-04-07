#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
* shash_table_create - Function which creates a shash table
* @size: Size of the array
* Return: NULL, if error occurs
*         Eles- return pointer to the new shash table
*/

typedef struct shash_table
{
unsigned long int size;
void **array;
}
shash_table_t;
shash_table_t *shash_table_create(unsigned long int size)
{
shash_table_t *table = malloc(sizeof(shash_table_t));
if (table != NULL)
{
table->array = malloc(size * sizeof(void *));
if (table-> array != NULL)
table->size = size;
for (unsigned long int i = 0; i < size; i++)
{
table->array[i] = NULL;
}
return tables;
}
free(tables);
}
return NULL;
}
}
}

/**
* hash_djb2 - implementation of the djb2 algorithm
* @str: string used to generate hash value
* Return: hash value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;
hash = 5381;
while ((c = *str++))
{
shash = ((shash << 5) + shash) + c; /* hash * 33 + c */
}
return (shash);
}

/**
* key_index - Function which gets index at which a key/value
*                 pair should be stored in array of a shash table
* @key: index key
* @size: size of the shash table array
* Return: index of key
*/
 
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index = 0;
unsigned long int shash_value = shash_djb2(key);
}
if ((size & (size - 1)) == 0)
{
index = shash_value & (size - 1);
}
else
{
index = shash_value % size;
}
return index;
}

/**
* shash_table_set - Function which adds an element to a shash table
* @ht: shash table being added or updating key/value
* @key: key, which cannot be an empty string
* @vale: value of the key. must be a duplicate and cannot be empty string
* Return: 0 upon failure, else 1.
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
if (ht == NULL || key == NULL || key[0] == '\0')
{
return 0;
}
unsigned long int index = key_index((const unsigned char *) key, ht->size);
shash_node_t *node = ht->buckets[index];
while (node != NULL)
{
if (strcmp(node->key, key) == 0)
{
free(node->value);
node->value = strdup(value);
return 1;
}
node = node->next;
}
shash_node_t *new_node = (shash_node_t *) malloc (sizeof(shash_node_t));
if (new_node == NULL)
{
return 0;
}
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->buckets[index];
ht->buckets[index] = new_node;
ht->count++;
return 1;
}
}

/**
* shash_table_get - Function which retrieves a value associated
*                  with a key within a shash table
* @ht: pointer to the shash table
* @key: key of the hash table being retrieved
* Return: Value of element or NULL if key is not found
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
if (!ht || !key[0])
{
return NULL;
}
unsigned long int index = key_index((const unsigned char*)key, ht->size);
for (shash_node_t *node = ht->buckets[index]; node; node = node->next)
{
if (strcmp(node->key, key) == 0)
{
return node->value;
}
}

/**
* shash_table_print - Function which prints a shash table
* @ht: pointer to shash table
* Return: do not print any if ht is NULL
*/

void shash_table_print(const shash_table_t *ht)
{
if (ht == NULL)
{
return;
}
printf("{");
for (unsigned long int i = 0; i < ht->size; i++)
{
shash_node_t *node = ht->buckets[i];
while (node != NULL)
{
printf("'%s': '%s'", node->key, node->value);
node = node->next;
if (node != NULL)
{
printf(", ");
}
}
if (i != ht ->size -1 && node != NULL)
{
printf("}\n");
}
                 
/**
* shash_table_delete - Function which deletes a shash table
* @ht: pointer to shash table
*/

void shash_table_delete(shash_table_t *ht)
{
for (int i = 0; i < ht->size; i++)
{
node_t *curr = ht->buckets[i];
while (curr != NULL)
{
curr = curr->next;
free(temp);
}
}
free(ht->buckets);
free(ht);
}
