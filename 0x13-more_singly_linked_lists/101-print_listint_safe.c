#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: a pointer to a pointer to the start of the list
 * @n: the integer to be inserted in the new node
 * Return: address of the new element
 */
ptrhold *add_node(ptrhold **head, listint_t *hold)
{
	ptrhold *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(*new));

	if (new == NULL)
		return (NULL);

	new->hold = hold;
	new->next = *head;
	*head = new;

	return (*head);
}

/*
 * free_listint_s - frees a ptrhold list
 * @head: a pointer to the start of the list
 * Return: nothing.
 *
void free_list_s(ptrhold *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
*/
/**
 * print_listint_safe - prints a list with our without a loop, identifies loop
 * elements
 * @head: a pointer to the start of the list
 * Return: number of nodes in the list. Exit with 98 for failure
 */
size_t print_listint_safe(const listint_t *head)
{
	ptrhold *newhead, *newheadCpy, *temp;
	listint_t *temphead;
	int count = 0;

	if (head == NULL)
		return (0);;

	temphead = (listint_t *)head;
	newhead = NULL;
	add_node(&newhead, temphead);
	if (newhead == NULL)
		return (0);
	temp = newhead;
	newheadCpy = newhead;
	while (temphead != NULL)
	{
		printf("[%p] %d\n", (void *)temphead, temphead->n);
		newhead->next = malloc(sizeof(*newhead));
		if (newhead->next == NULL)
			return (0);
		newhead = newhead->next;
		newhead->hold = temphead->next;
		newhead->next = NULL;
		count++;
		newheadCpy = temp;
		while (newheadCpy->next != NULL && temphead != NULL)
		{
			if (temphead->next == (void *)newheadCpy->hold)
			{
				printf("-> [%p] ", (void *)temphead->next);
				temphead = temphead->next;
				printf("%d\n", temphead->n);
				return (count);
			}
			newheadCpy = newheadCpy->next;
		}
		temphead = temphead->next;
	}
	return (count);
}
