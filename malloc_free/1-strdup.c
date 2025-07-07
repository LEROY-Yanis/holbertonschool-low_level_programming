#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * @str: string to duplicate
 * Return: a pointer to the str or NULL
 */

char *_strdup(char *str)
{
	int i, l = 0;
	char *str1;

	if (str == 0)
		return (NULL);

	for (; str[l] != '\0'; l++)
		{}

	str1 = malloc(sizeof(char) * (l + 1));
	if (str1 == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
		str1[i] = str[i];
	str1[l] = '\0';

	return (str1);
}
