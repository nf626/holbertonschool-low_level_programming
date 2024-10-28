#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100.
 * multiples of three print Fizz instead of the number.
 * multiples of five print Buzz.
 *
 * Each number or word should be separated by a space
 * You are allowed to use the standard library 
 *
 * Return: Nothing.
 */
int main (void)
{
  int i;

  for (i = 0; i <= 100; i++)
    {
      if ((i % 3) == 0)
	{
	  printf("Fizz ");
	}
      else if ((i % 5) == 0)
	{
	  printf("Buzz ");
	}
      else if (((i % 3) == 0) && ((i % 5) == 0))
	{
	  printf("FizzBuzz ");
	}
    }
  
  return (0);
}
