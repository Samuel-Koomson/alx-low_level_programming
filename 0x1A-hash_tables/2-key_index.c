 #include "hash_tables"
 
 /**
  * key_index - Function which gets index at which a key/value
                pair should be stored in array of a hash table
  * @key: index key
  * @size: size of the hash table array
  * Return: index of key
  */
  
  unsigned long int key_index(const unsigned char *key, unsigned long int size)
  {
      unsigned long int index = 0;
      unsigned long int hash_value = hash_djb2(key);
     
  }
  if ((size & (size - 1)) == 0)
  {
      index = hash_value & (size - 1);
  }
  else
  {
      index = hash_value % size;
  }
  return index;
  }
  
  }
  }
 
