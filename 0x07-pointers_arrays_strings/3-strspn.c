#include "main.h"

/**
* _strspn - function that gets the lenght of a prefix substring
* @s: input variable
* @accept: input accepting variable
* Return: bytes in segment
*/
unsigned int _strspn(char *s, char *accept)

{
unsigned int n = 0;
int r;
while (*s)
{
for (r = 0; accept[x]; r++)
{
if (*s == accept[r])
{
n++;
break;
}
else if (accept[r + 1] == '\0')
return (n);
}
s++;
}
return (n);
}
