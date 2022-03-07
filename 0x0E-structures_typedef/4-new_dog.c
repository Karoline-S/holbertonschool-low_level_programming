#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies the string at src to the memory ta dest
 * @dest: pointer to the memory for the new string
 * @src: pointer to the string to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

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
	char *sName, *sOwner;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	sName = malloc(sizeof(*name));

	if (sName != NULL)
		sName = _strcpy(sName, name);

	sOwner = malloc(sizeof(*owner));

	if (sOwner != NULL)
		sOwner = _strcpy(sOwner, owner);

	new->name = sName;
	new->age = age;
	new->owner = sOwner;

	printf("sName string is: %s\n", sName);

	return (new);
}
