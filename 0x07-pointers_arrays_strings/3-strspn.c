#include "main.h"

/**
* _strspn - function that gets the lenght of a prefix substring
* @s: input variable
* @accept: input accepting variable
* Return: bytes in segment
*/
unsigned int _strspn(char *s, char *accept)

{
unsigned int y = 0;
int x;
while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
{
n++;
break;
}
else if (accept[x + 1] == '\0')
return (y);
}
s++;
}
return (y);
}
