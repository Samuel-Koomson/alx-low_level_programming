 #include "hash_tables.h"
 #include <stdlib.h>
 
 /**
  * hash_table_create - Function which creates a hash table
  * @size: Size of the array
  * Return: NULL, if error occurs
  *         Eles- return pointer to the new hash table
  */
 
 typedef struct hash_table
 {
     unsigned long int size;
     void **array;
 }
 hash_table_t;
 hash_table_t *hash_table_create(unsigned long int size)
 {
     hash_table_t *table = malloc(sizeof(hash_table_t));
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
