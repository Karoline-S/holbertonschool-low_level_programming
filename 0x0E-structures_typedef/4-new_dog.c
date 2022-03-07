#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new variable from struct dog
 * @name: value to be stored at .name
 * @age: value to be stored at .age
 * @owner: value to be stored at .owner
 * Return: pointer to new variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;

	new->name = malloc(sizeof(*name));

	if (new->name != NULL)
		*(new->name) = *name;

	new->owner = malloc(sizeof(*owner));

	if (new->owner != NULL)
		*(new->owner) = *owner;

	return (new);
}
