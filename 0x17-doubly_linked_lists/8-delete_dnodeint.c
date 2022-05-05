#include <stdlib.h>
#include "lists.h"

/**
 * index_check - checks to see if an index position if valid
 * @head: a pointer to the start of the list
 * @idx: the index position
 * Return: 0 if position exists mid-list, 1 if exists at end of list, 2 if
 * doesn't exist
 */
int index_check(dlistint_t *head, int idx)
{
	while (idx > 0 && head != NULL)
	{
		head = head->next;
		idx--;
	}

	if (idx != 0)
		return (2);

	if (idx == 0 && head == NULL)
		return (1);

	return (0);
}

/**
 * free_first_node - frees the first node in the list
 * @head: a pointer to the start of the list
 * Return:Nothing
 */
void free_first_node(dlistint_t **head)
{
	if ((*head)->next != NULL)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
	}
	else
	{
		free(*head);
		*head = NULL;
	}
}

/**
 * free_last_node - frees the last node in the list
 * @head: a pointer to the start of the list
 * Return: Nothing
 */
void free_last_node(dlistint_t *head)
{
	while (head->next != NULL)
		head = head->next;

	head->prev->next = NULL;
	free(head);
}

/**
 * get_dnodeint_at_index - returns pointer to the nth node in
 * a doubly linked dlistint_t list
 * @head: a pointer to the start of the list
 * @index: an int indicating the nth node (starting at 0)
 * Return: the address of the nth node or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (index == 0)
		return (head);

	while (index > 0 && head != NULL)
	{
		head = head->next;
		index--;
	}

	if (index != 0)
		return (NULL);

	return (head);
}
/**
 * delete_dnodeint_at_index - delete node at index provided
 * @head: a pointer to pointer to start of list
 * @index: index of node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hold;
	int idx_check;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		free_first_node(head);
		return (1);
	}

	idx_check = index_check(*head, index);

	if (idx_check == 2)
		return (-1);

	if (idx_check == 1)
	{
		free_last_node(*head);
		return (1);
	}

	hold = get_dnodeint_at_index(*head, index);
	hold->next->prev = hold->prev;
	hold->prev->next = hold->next;
	free(hold);
	return (1);
}
