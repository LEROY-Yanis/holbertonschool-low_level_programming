#include "main.h"

/**
 * _isupper - check if the character is an uppercase
 * @c: Char to check
 *
 * Return: 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
