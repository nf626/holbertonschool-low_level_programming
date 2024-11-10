#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: contains the number of arguments passed to the program.
 * @argv: one-dimensional array of strings.
 *        Each string is one of the arguments
 *        that was passed to the program.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int sum, i, j;

if (argc == 1)
{
printf("0\n");
return (0);
}
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
sum = sum + atoi(argv[i]);
for (j = 0; argv[i][j] != '\0'; j++)
{
printf("argv[%d][%d] = %d\n", i, j, argv[i][j]);
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
}
printf("%d\n", sum);
}
return (0);
}
