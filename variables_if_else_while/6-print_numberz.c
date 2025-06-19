#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point of the program
 * Return: 0 (success)
 */

int main(void)
{
int i = 0;
for (; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
