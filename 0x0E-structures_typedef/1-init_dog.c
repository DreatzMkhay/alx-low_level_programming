#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable type of struct dog
 * @d: to initialize a type of dog structure.
 * @name: initialize the name of type struct dog.
 * @age: initialize the age of type struct dog.
 * @owner: initialize the owner of type struct dog.
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
