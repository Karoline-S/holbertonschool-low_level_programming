#include "dog.h"

/**
 * init_dog - initialise a variable of type struct dog
 * @d: variable name
 * @name: member name
 * @age: member age
 * @owner: member owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}