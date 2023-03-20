#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *jx_dog;
	int i, lna, lor;

	jx_dog = malloc(sizeof(*jx_dog));
	if (jx_dog == NULL || !(name) || !(owner))
	{
		free(jx_dog);
		return (NULL);
	}

	for (lna = 0; name[lna]; lna++)
		;

	for (lor = 0; owner[lor]; lor++)
		;

	jx_dog->name = malloc(lna + 1);
	jx_dog->owner = malloc(lor + 1);

	if (!(jx_dog->name) || !(jx_dog->owner))
	{
		free(jx_dog->owner);
		free(jx_dog->name);
		free(jx_dog);
		return (NULL);
	}

	for (i = 0; i < lna; i++)
		jx_dog->name[i] = name[i];
	jx_dog->name[i] = '\0';

	jx_dog->age = age;

	for (i = 0; i < lor; i++)
		jx_dog->owner[i] = owner[i];
	jx_dog->owner[i] = '\0';

	return (jx_dog);
}
