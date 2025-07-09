#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements in the array.
 * @size: the size of each element in bytes.
 * Return: A pointer to the allocated memory, or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i, l;

	if (size == 0 || nmemb == 0)
		return (NULL);

	i = nmemb * size;
	c = malloc(i);

	if (c == NULL)
		return (NULL);

	for (l = 0; l < i; l++)
		c[l] = 0;
	return (c);
}
