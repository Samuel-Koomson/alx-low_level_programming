#include "main.h"

/**
*_strcpy - function used for copying strings
*@dest: value of the destination
*@src: value of the source
*
*Return: dest.
*/
char *_strcpy(char *dest, char *src)
{
int s;
for (s = 0; src[s] != '\0'; s++)
{
dest[s] = src[s];
}
dest[s++] = '\0';
return (dest);
}
