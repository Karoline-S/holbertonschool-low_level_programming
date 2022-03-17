#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to the front a list
 * @head: pointer to pointer for start of list
 * @str: pointer to string for inclusion
 * Return: pointer to new node or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

/*	if (*head == NULL)
		new->next = NULL;
		else */
	new->next = *head;
	*head = new;

	return (new);
}
