#include "main.h"
#include <stdio.h>

/**
 * _strspn - calculates the length of the initial segment
 * @s: pointer initial segment
 * @accept: pointer substring
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		int j;
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
			break;
	}
	return (i);
}
