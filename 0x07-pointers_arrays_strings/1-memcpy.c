#include "main.h"

/**
* _memcpy - copies bytes from memory area
* @dest: destination memory
* @src: source memory
* @n: number of bytes being copied
* Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int a;
for (a = 0; a < n; a++)
dest[a] = src[a];
return (dest);
}
