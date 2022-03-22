#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

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
		exit(98);

	newhead = malloc(sizeof(*newhead));
	if (newhead == NULL)
		exit(98);
	temphead = (listint_t *)head;
	newhead->hold = temphead;
	newhead->next = NULL;
	temp = newhead;
	newheadCpy = newhead;
	while (temphead != NULL)
	{
		printf("[%p] %d\n", (void *)temphead, temphead->n);
		newhead->next = malloc(sizeof(*newhead));
		if (newhead->next == NULL)
			exit(98);
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
