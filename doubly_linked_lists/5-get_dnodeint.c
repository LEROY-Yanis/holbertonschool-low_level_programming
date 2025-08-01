#include "lists.h"
/**
 * get_dnodeint_at_index - a function that returns the
 * nth node of a linked list.
 * @head: a pointer
 * @index: is the index of the node to retrieve, starting from 0.
 * Return: the address of the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = (*head).next;
		i++;
	}
	if (head == NULL)
		return (NULL);

	return (head);
}
