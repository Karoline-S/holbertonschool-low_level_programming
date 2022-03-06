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

	new = malloc(sizeof(*name + age + *owner));

	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
