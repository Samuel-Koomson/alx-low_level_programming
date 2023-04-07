 #include "hash_tables.h"
 
 /**
  * hash_table_print - Function which prints a hash table
  * @ht: pointer to hash table
  * Return: do not print any if ht is NULL
  */
  
  void hash_table_print(const hash_table_t *ht)
  {
      if (ht == NULL)
      {
          return;
      }
      printf("{");
      for (unsigned long int i = 0; i < ht->size; i++)
      {
          hash_node_t *node = ht->buckets[i];
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
