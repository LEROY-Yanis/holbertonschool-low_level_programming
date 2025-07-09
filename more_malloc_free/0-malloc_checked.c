#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - that allocates memory using malloc
 * @b: allocated of memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
