#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char
 * @s: pointer to pointer being set to
 * @to: string to be set
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
