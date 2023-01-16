#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function prints prints data type struct dog
 * @d: pointer variable of struct dog to be printed
 * Return: Null otherwise print dog
 */
void *print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	return (NULL);
}
