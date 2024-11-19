#include "3-calc.h"
#include <stdio.h>

/**
 * main - calculate the sum.
 *
 * Return: sum of calc.
 */
int main(int argc, char *argv[])
{
  int (*operator)(int num1, int num2);
  
  if (argc != 4)
    {
      printf("Error\n");
      exit(98);
    }
  operator;
  if (operator == 0)
    {
      printf("Error\n");
      exit(99)
    }
  printf("%d\n", atoi(argv[]), atoi(argv[]));
  return (0);
}
