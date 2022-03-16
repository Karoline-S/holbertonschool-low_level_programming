#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to the end of the list
 * @head: pointer to pointer to start of list
 * @str: string pointer for inclusion of string
 * Return: address of new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newEnd = NULL;
	list_t *last = *head;

	newEnd = malloc(sizeof(list_t));
	if (newEnd == NULL)
		return (NULL);

	newEnd->str = strdup(str);
	newEnd->next = NULL;

	if (*head == NULL)
	{
		*head = newEnd;
		return (newEnd);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = newEnd;

	return (newEnd);
}
