#include "main.h"

/**
 * checker - find if prime number.
 * @x: Value passed by is_prime_number..
 *
 * Return: value back to is_prime_number.
 */
int checker(int x, int y)
{
  if (x == 1)
    {
      return (1);
    }
  else if(x > 2)
    {
      return (0);
    }
 
  return (checker(x, y + 1);
}

/**
 * is_prime_number - input integer is a prime number.
 * @n: Value.
 *
 * Return: 1 is prime number, 0 not prime number.
 */
int is_prime_number(int n)
{
  if (n < 0)
    {
      return (0);
    }

  return (checker(int n, 0));
}
