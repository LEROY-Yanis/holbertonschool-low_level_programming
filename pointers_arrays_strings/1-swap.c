#include "main.h"

/**
 * swap_int - swap two int
 * @a - number
 * @b - number
 */
void swap_int(int *a, int *b)
{
int i = 0;

        i = *a;
	*a = *b;
	*b = i;
}
