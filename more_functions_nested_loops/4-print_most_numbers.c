#include "main.h"
/**
* print_most_numbers - Prints the numbers from 0 to 9
*
* and can only use _putchar twice in the code
*/

void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
if (i != '2' && i != '4')
{
_putchar(i);
}
_putchar('\n');
}
