#include "main.h"
#include <stdlib.h>

/**
* *str_nconcat - function which concatenate two strings
* @s1: first string to be concatenated
* @s2: second string to be concatenated
* @n: number of bytes
* Return: NULL on failure
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *sam;
	unsigned int x = 0, y = 0, length = 0, length1 = 0;

while (s1 && s1[length])
length++;
while (s2 && s2[length1])
length1++;

if
(n < length1)
sam = malloc(sizeof(char) * (length + n + 1));
else
sam = malloc(sizeof(char) * (length + length1 + 1));
if (!sam)
return (NULL);
while (x < length)
{
sam[x] = s1[x];
x++;
}
while 
(n < length1 && x <(length + n))
sam[x++] = s2[y++];
while (n >= length1 && x < (length + length1))
sam[x++] = s2[y++];
sam[x] = '\0';
return (sam);
}
