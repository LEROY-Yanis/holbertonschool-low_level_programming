#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	unsigned int i;

	while (h != NULL)
	{
		_putchar('[');
		if (h->str == NULL)
		{
			_putchar('0');
			_putchar(']');
			_putchar(' ');
			_putchar('(');
			_putchar('n');
			_putchar('i');
			_putchar('l');
			_putchar(')');
			_putchar('\n');
		}
		else
		{
			unsigned int len = h->len, div = 1;

			while (len / div >= 10)
				div *= 10;
			while (div)
			{
				_putchar('0' + len / div);
				len %= div;
				div /= 10;
			}
			_putchar(']');
			_putchar(' ');
			for (i = 0; h->str[i] != '\0'; i++)
				_putchar(h->str[i]);
			_putchar('\n');
		}
		count++;
		h = h->next;
	}
	return (count);
}
