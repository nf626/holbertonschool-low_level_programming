#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers,
 *         starting with 1 and 2, followed by a new line.
 *
 * Return: 0, Success.
 */
int main(void)
{
  int i = 1, prev = 1, next = 2, current; 

  while (i < 50)
    {
      if (i > 2)
	{
	  current = prev + next;
	  prev = next;
	  next = current;
	  printf("%d, ", current);
	}
      else if (i == 1)
	{
	  printf("%d, ", prev);
	}
      else if (i == 2)
	{
	  printf("%d, ", next);
	}
      i++;
    }
  printf("\n");
  return (0);
}
