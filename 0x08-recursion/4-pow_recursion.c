#include "main.h"

/**
* _pow_recursion - function that returns value of x to the power of y
* @x: first integer variable
* @y: second integer variable
* Return: integer
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (y == 1)
return (x);
return (x * _pow_recursion(x, y - 1));
}

