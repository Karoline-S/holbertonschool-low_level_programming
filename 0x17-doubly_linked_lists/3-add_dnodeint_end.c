#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of doubly linked list
 * @head: a pointer to pointer to start of the list
 * @n: int to be stored in new node
 * Return: address of the new node or NULL if node creation failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	while (*head->next != NULL)
		*head = *head->next;

	*head->next = new;
	new->prev = *head;
	return (new);
}
