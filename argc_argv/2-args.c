#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argc: contains the number of arguments passed to the program.
 * @argv: one-dimensional array of strings.
 *        Each string is one of the arguments
 *        that was passed to the program.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int i;

if (argc > 0)
{
while (i < argc)
{
printf("%s\n", argv[i]);

i++;
}
}
return (0);
}
