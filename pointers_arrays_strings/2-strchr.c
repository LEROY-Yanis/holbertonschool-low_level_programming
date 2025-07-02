#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @c: charcter
 * @s: the string
 *
 * Return: c succes NULL: if the character is not found
 */

char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; ; i++)
	{
		if (s[i] == c)
			return (i + s);
		if (s[i] == '\0')
		return (NULL);
	}
}

