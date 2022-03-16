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

	if (str == NULL)
		new->str = NULL;
	else
		new->str = strdup(str);

	if (head == NULL)
	{
		head = &new;
		*head = new;
		new->next = NULL;
		return (new);
	}
	new->next = *head;
	*head = new;

	return (new);
}
