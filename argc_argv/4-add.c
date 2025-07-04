#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* is_number - Checks if s is a number
* @s: Buffer
* Return: 1 if number, 0 otherwise
*/
int is_number(char *s)
{
while (*s)
{
if (!isdigit(*s))
return (0);
s++;
}
return (1);
}
/**
* main - Entry point
* @argc: Arguments count
* @argv: Array of arguments
* Return: -1 if error, 0 otherwise
*/
int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
