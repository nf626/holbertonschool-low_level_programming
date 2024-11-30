#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * If n is greater than 15 or less than 0 the function should not print anything.
 * @n: integer.
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
  int x = 0, y, z;

  if (n < 0 || n > 15)
    {
    }
  for (x = 0; x <= n; x++)
    {
      _putchar('0');
      
      for (y = 1; y <= n; y++)
	{
	  _putchar(',');
	  _putchar(' ');
	  
	  z = x * y;
	  
	  if (z <= n)
	    {
	      _putchar(' ');
	    }
	  else
	    {
	      _putchar('0' + (z / 10));
	    }
	  _putchar('0' + (z % 10));
	}
      _putchar('\n');
    }
}
