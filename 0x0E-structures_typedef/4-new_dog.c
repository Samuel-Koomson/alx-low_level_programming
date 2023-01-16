#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - This function creates a new dog
 * @name: struct pointer variable of char name
 * @age: struct pointer variable of float, age of dog
 * @owner: struct pointer variable of char, owner of dog
 * Return: struct dog new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name != NULL || owner != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;

		return (new_dog);
	}
	else
	{
		return (NULL);
	}
}
