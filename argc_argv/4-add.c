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
int sum, i = 1, j;
char *ptr;

while (i < argc)
{
ptr = argv[i];
j = 0;

while (ptr[j] != '\0')
{
if (ptr[j] < '0' || ptr[j] > '9')
{
printf("Error\n");
return (1);
}
j++;
}
sum = sum + atoi(argv[i]);
i++;
}
printf("%d\n", sum);

return (0);
}
