#include "main.h"

/**
* _isdigit - produces 1 as result if c is a digit
* @c: number of interest to be checked
*
* Return: Returns 1 if c is digit or 0 if otherwise
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
