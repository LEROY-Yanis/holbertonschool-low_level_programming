#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Return: 0 (success)
 */

int main(void)
{

int i;
float f;
char c;

printf("Size of a char: 1 byte(s): %lu.\n", (unsigned long)sizeof(c));
printf("Size of an int: 4 byte(s): %lu.\n", (unsigned long)sizeof(i));
printf("Size of a long int: 4 byte(s): %lu.\n", (signed long)sizeof(i));
printf("Size of a long long int: 8 byte(s): %lu.\n", (signed long long)sizeof(i));
printf("Size of a float: 4 byte(s): %lu._n", (unsigned long)sizeof(f));
return (0)
}
