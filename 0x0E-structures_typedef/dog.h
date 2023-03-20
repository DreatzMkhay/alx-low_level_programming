#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Defines the information of the dog and new type struct dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}

/* struct dog */

dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
