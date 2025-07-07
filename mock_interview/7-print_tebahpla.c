#include <stdio.h>

/**
 * main - print
 * Return: Always 0
 */

int main(void)
{
int i = 'z';

while ('a' <= i)
{
putchar(i);
i--;
}
putchar('\n');
return (0);
}
