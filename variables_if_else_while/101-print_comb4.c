#include <stdio.h>

/**
 * main - Prints possible combinations of single digit numbers.
 *        No repeats.
 *
 * Numbers must be separated by ',', followed by a space.
 * only use putchar.
 * max of 6 putchar.
 * no type chars.
 *
 * Return: 0, Success
 */
int main(void)
{
int num1 = '0', num2, num3;

while (num1 <= '9')
  {
    num2 = '0';
    while (num2 <= '9')
      {
	num3 = '0';
	while (num3 <= '9')
	  {
	    if ((num1 == num2) || (num1 == num3) || (num2 == num3))
	      {
	      }
	    else if ((num1 > num2) || (num1 > num3) || (num2 > num3))
	      {
	      }
	    else
	      {
		putchar(num1);
		putchar(num2);
		putchar(num3);
		if ((num1 == '7') && (num2 == '8') && (num3 == '9'))
		  {
		    break;
		  }
		putchar(',');
		putchar(' ');
	      }
	    num3++;
	  }
	num2++;
      }
    num1++;
  }
putchar('\n');
return (0);
}
