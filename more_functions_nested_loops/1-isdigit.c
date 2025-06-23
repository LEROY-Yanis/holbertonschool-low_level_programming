#include "main.h"

/**
 * _isdigit - check if the charater is an digit
 * @c: digit to check
 *
 * Return: 1 if digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
