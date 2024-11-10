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
  int sum, x = 0;

  printf("number of arguements = %d\n", argc);
  
 if (argc > 1)
    {
      int i = 1;
      while (i < argc)
	{
	  printf("argv[%d] = %s\n", i, argv[i]);

	  sum = sum + atoi(argv[i]);
	  i++;
	}
      printf("%d\n", sum);
    }
 else
   {
     printf("%d\n", x);
   }
  return (0);
}
