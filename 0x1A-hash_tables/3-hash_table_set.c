 #include "hash_tables.h"
 
 /**
  * hash_table_set - Function which adds an element to a hash table
  * @ht: hash table being added or updating key/value
  * @key: key, which cannot be an empty string
  * @vale: value of the key. must be a duplicate and cannot be empty string
  * Return: 0 upon failure, else 1.
  */
  
  int hash_table_set(hash_table_t *ht, const char *key, const char *value)
  {
      if (ht == NULL || key == NULL || key[0] == '\0')
      {
          return 0;
      }
      
      unsigned long int index = key_index((const unsigned char *) key, ht->size);
      hash_node_t *node = ht->buckets[index];
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
      
      hash_node_t *new_node = (hash_node_t *) malloc (sizeof(hash_node_t));
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
  
