#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a specific index in a list.
 * @head: Pointer to the pointer to the head of the list.
 * @index: The index of the node to delete.
 * Return: 1 if successful, -1 if it fails.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *actual;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	actual = *head;
	if (index == 0)
	{
		*head = (*actual).next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(actual);
		return (1);
	}

	while (actual != NULL && i < index)
	{
		actual = (*actual).next;
		i++;
	}

	if (actual == NULL)
		return (-1);

	if ((*actual).prev != NULL)
		(*actual).prev->next = (*actual).next;

	if ((*actual).next != NULL)
		(*actual).next->prev = (*actual).prev;

	free(actual);
	return (1);
}
