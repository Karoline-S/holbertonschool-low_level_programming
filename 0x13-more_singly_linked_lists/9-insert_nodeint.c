#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - finds the address of the nth node
 * @head: pointer to the start
 * @index: index for the node to be returned (beginning at 0)
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	if (head == NULL)
		return NULL;

	if (index == 0)
		return (head);

	temp = head;
	while (count < index && temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (0);

	return (temp);
}

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: a pointer to a pointer to the start of the list
 * @n: the integer to be inserted in the new node
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

/*
 * add_nodeint_end - adds a new list_t element at the end
 * @head: a pointer to a pointer to the first node
 * @n: the integer to be held in the new node
 * Return: the address of the new node
 *
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *hold;

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
		return (*head);
	}
	else
	{
		hold = *head;
		while (hold != NULL)
		{
			if (hold->next == NULL)
			{
				hold->next = new;
				return (*head);
			}
			hold = hold->next;
		}
	}

	return (new);
}
*/
/**
 * insert_nodeint_at_index - insert new node at nth node point
 * @head: pointer to pointer to start of the list
 * @idx: index to node position for new node
 * Return: address to new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert, *new, *temp;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new = add_nodeint(head, n);
		return(new);
	}

	insert = get_nodeint_at_index(*head, idx);

	if (insert == NULL)
		return (NULL);

	if (insert->next == NULL)
	{
		new = add_nodeint_end(head, n);
		return (new);
	}

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);

	new->n = n;

	temp = *head;
	while (temp->next != insert)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->next = insert;

	return (new);
}
