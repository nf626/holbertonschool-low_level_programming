#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded),
 *        followed by a new line.
 *
 * Return: 0, Success.
 */
int main(void)
{
  int n, sum = 0;

  if (n < 1024)
    {
      while (n % 3 || n % 5)
	{
	  sum = sum + n;
	  n++;
	}
      
    }
  return (0);
}
