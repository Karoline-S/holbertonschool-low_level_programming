#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to the front a list
 * @head: pointer to pointer for start of list
 * @str: pointer to string for inclusion
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (*head);
}
