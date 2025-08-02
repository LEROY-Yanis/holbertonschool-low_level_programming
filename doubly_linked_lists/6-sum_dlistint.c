#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data (n) in a dlistint_t list
 * @head: pointer
 * Return: the sum of all the data (n) in the list, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head != NULL)
{
sum += head->n;
head = head->next;
}
if (head == NULL && sum == 0)
{
return (0);
}
return (sum);
}
