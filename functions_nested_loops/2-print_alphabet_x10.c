#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabet in lowercase.
*
* Return: None
*/
void print_alphabet_x10(void)
{
int ch;
int i;
for (i = 0; i < 10; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
