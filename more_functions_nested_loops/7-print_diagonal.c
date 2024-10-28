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

      for (i = 0; i < n; i++)
	{
	  for (j = 0; j < i; j++)
	    {
	      if (j == n)
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
