#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: contains the number of arguments passed to the program.
 * @argv: one-dimensional array of strings.
 *        Each string is one of the arguments
 *        that was passed to the program.
 *
 * Return: string.
 */
int main(int argc, char *argv[])
{
if (argc > 0)
{
printf("%s\n", argv[0]);
}
return (0);
}
