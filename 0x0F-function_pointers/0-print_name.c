 #include "function_pointer.h"
 #include <stdio.h>

 /**
 * print_name - function that prints 
 * @name: character pointer
 * @f: function pointer
 * Return: void
 */
 void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
