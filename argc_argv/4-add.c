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
char *ptr;

if (argc > 1)
{
printf("arguments = %d\n", argc);
while (i < argc)
{
int j = 0;
ptr = argv[i];
while (ptr[j] != '\0')
{
if (ptr[j] < '0' || ptr[j] > '9')
{
printf("Error\n");
return (1);
}
j++;
}
printf("argv[%d] = %s\n", i, argv[i]);
sum = sum + atoi(argv[i]);
i++;
}
}
printf("%d\n", sum);

return (0);
}
