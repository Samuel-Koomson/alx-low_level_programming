#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This creates new data type struct dog
 * @name: member variable name of type (char *)
 * @age: member variable age of type (float)
 * @owner: member variable owner of type (char *)
 * Description: creates data structure of dogs
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
}
dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void *print_dog(struct dog *d);
void *init_dog(struct dog *d, char *name, float age, char *owner);
#endif
