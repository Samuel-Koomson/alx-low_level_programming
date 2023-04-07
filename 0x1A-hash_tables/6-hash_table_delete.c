 #include "hash_tables.h"
 #include <stdlib.h>
 
 /**
  * hash_table_delete - Function which deletes a hash table
  * @ht: pointer to hash table
  */
  
 void hash_table_delete(hash_table_t *ht)
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
