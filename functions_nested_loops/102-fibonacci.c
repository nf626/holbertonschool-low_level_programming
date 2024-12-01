#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers,
 *         starting with 1 and 2, followed by a new line.
 *
 * Return: 0, Success.
 */
int main(void)
{
  int i = 1, prev, next, sum;

  while (i <= 50)
    {
      prev = 0, next = 0, sum = 0;
      prev = i;
      next = i + 1;
      sum = prev + next;
      printf("%d, %d, %d, ", prev, next, sum);
      i++;
      sum = next;
    }
  return (0);
}
