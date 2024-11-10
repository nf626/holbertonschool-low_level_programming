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
int i;
unsigned int sum = 0, j;
char *ptr;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
ptr = argv[i];

for (j = 0; argv[i][j] != '\0'; j++)
{
if (ptr[j] < 48 || ptr[j] > 57)
{
printf("Error\n");
return (1);
}
}
sum = sum + atoi(argv[i]);
ptr++;
}
printf("%d\n", sum);
}
else
{
printf("0\n");
}
return (0);
}
