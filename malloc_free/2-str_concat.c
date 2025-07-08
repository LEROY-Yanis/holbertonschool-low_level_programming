#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concat two strings
 * @s1: pointer for the first string
 * @s2: pointer for the seconde string
 * Return: s3 (s1 + s2) or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int l = 0;
	int k = 0;
	int len1 = 0;
	int len2 = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (; s1[l] != '\0'; l++)
		{}

	for (; s2[i] != '\0'; i++)
		{}

	s3 = malloc(sizeof(char) * (l + i + 1));
	if (s3 == NULL)
		return (NULL);

	for (len1 = 0; len1 < l; len1++)
		s3[k++] = s1[len1];
	for (len2 = 0; len2 < i; len2++)
		s3[k++] = s2[len2];
	s3[k] = '\0';

	return (s3);
}
