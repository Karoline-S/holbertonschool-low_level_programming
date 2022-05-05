#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a doubly linked dlistint_t list
 * @head: a pointer to the start of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *hold;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		hold = head->next;
		free(head);
		head = hold;
	}

	free(head);
}
