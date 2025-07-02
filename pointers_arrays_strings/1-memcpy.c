#include "main.h"
#include <stdio.h>

/**
 * _memcpy - returns a pointer to dest
 * @n: number
 * @src: pointer source
 * @dest: pointer destination
 *
 * Return: dest (succes)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
