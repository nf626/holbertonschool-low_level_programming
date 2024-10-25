#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main
 *
 * return
 *
 */
int main(void)
{
  int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = ;
	if (n > 5)
	  {
	    printf("Last digit of %d is %d and is greater than 5\n", n);
	  }
	else if ( n == 0)
	  {
	    printf("Last digit of %d is %d and is 0\n", n, );
	  }
	else
	  {
	    printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	  }
	    
	return (0);
}
