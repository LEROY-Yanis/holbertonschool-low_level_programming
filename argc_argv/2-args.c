#include <stdio.h>
/**
* main - Prints amount of args
* @argc: Amount of arguments
* @argv: Array of arguments
* Return: Always 0
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
