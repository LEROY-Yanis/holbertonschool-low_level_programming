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
int I = 'A';

while (i <= 'z')
{
putchar(i);
i++;
}
while (I <= 'Z')
{
putchar(I);
I++;
}
putchar('\n');
return (0);
}
