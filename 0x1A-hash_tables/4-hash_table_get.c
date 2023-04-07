 #include "hash_tables.h"
 
 /**
  * hash_table_get - Function which retrieves a value associated
  *                  with a key within a hash table
  * @ht: pointer to the hash table
  * @key: key of the hash table being retrieved
  * Return: Value of element or NULL if key is not found
  */
  
  char *hash_table_get(const hash_table_t *ht, const char *key)
  {
      if (!ht || !key[0])
      {
          return NULL;
      }
  
      unsigned long int index = key_index((const unsigned char*)key, ht->size);
      for (hash_node_t *node = ht->buckets[index]; node; node = node->next)
      {
          if (strcmp(node->key, key) == 0)
          {
              return node->value;
          }
          }
      }
  }
  
