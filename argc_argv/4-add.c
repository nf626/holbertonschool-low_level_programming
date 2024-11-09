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
int i, sum = 0;

 if (argc > 0)
   {
     while (i < argc)
       {
sum = sum + atoi(argv[i]);
       }
printf("%d\n", sum);
}
return (not_Two);
}
