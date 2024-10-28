#include "main.h"

/**
 * print_diagonal - draws a diagonal line.
 * @n: Formal parameter.
 *
 * Return: value to n.
 */

void print_diagonal(int n)
{

  int i, j;

  if (n > 0)
    {
      for (i = 0; i < n; i++)
	{
	  for (j = 0; j < n; j++)
	    {
	      if (j == i)
		{
		  _putchar('\\');
		}
	      else
		{
		  _putchar(' ');
		}
	    }
	  _putchar('\n');
	}
    }
  _putchar('\n');
}
