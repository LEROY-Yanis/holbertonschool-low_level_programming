#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: number one
 * @b: number two
 * Return: result of a + b
 */

int op_add(int a, int b)
{
	int i = a + b;

	return (i);
}

/**
 * op_sub - returns the difference of a and b
 * @a: number one
 * @b: number two
 * Return: result of a - b
 */

int op_sub(int a, int b)
{
	int i = a - b;

	return (i);
}

/**
 * op_mul - returns the product of a and b
 * @a: number one
 * @b: number two
 * Return: result of a * b
 */

int op_mul(int a, int b)
{
	int i = a * b;

	return (i);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: number one
 * @b: number two
 * Return: result of a / b
 */

int op_div(int a, int b)
{
	int i = a / b;

	return (i);
}

/**
 * op_mod - returns the result of the division of a by b
 * @a: number one
 * @b: number two
 * Return: result of a % b
 */

int op_mod(int a, int b)
{
	int i = a % b;

	return (i);
}
