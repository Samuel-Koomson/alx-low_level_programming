#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - Function which selects appropriate function to be used
 * @s: operator
 * Return: function pointer
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_add},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int y;

	y = 0;
	while (y < 5)
	{
		if (ops[y].op[0] == s[0])
			return (ops[y].f);
		y++;
	}
	return (NULL);
}
