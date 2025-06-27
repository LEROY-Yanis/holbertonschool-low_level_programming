#include "main.h"
#include <stdio.h>

/**
 * _strlen - increase the lengt
 * @s: number
 *
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; )
		len++;
	return (len);
}

