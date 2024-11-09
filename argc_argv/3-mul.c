#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: contains the number of arguments passed to the program.
 * @argv: one-dimensional array of strings.
 *        Each string is one of the arguments
 *        that was passed to the program.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int sum;
int not_Two = 0;

if (argc != 3)
{
printf("%s\n", "Error");
not_Two = 1;
}
else
{
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
}
return (not_Two);
}