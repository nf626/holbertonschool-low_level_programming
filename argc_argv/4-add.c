#include <stdio.h>
#include <stdlib.h>

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
int sum, i = 1;

if (argc < 2)
{
printf("0\n");
return (0);
}
if (argc > 1)
{
int j = 0;
while (i < argc)
{
while (argv[i][j] != '\0')
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
j++;
}
sum = sum + atoi(argv[i]);
i++;
}
}
printf("%d\n", sum);
return (0);
}
