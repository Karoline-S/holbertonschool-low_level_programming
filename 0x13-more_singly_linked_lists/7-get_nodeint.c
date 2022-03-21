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
		return (NULL);

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
