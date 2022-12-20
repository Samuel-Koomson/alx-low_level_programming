#include "main.h"

/**
 *rev_string - reversing a string
 *@s: is the string
 */
void rev_string(char *s)
{
int len, b;
char aux;
len = 0;
b = 0;

while (s[len] != '\0')
{
len++;
}
while (b < len--)
{
aux = s[b];
s[b++] = s[len];
s[len] = aux;
}
}
