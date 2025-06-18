#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the program
 * Return: 0 (success)
 */
int main(void)
{
int i = 'a';

while (i <= 'z')
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
