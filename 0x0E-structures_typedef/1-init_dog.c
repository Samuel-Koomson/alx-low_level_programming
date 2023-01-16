#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a variable of type struct dog
 * @d: point of type struct dog
 * @name: member pointer variable of type char
 * @age: member pointer variable of type float
 * @owner: member pointer variable of type char
 * Return: NUll or bulldog
 */
void *init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *bulldog;

	if (d == NULL)
		return (NULL);

	bulldog = d;
	bulldog->name = name;
	bulldog->age = age;
	bulldog->owner = owner;
	return (bulldog);
}
