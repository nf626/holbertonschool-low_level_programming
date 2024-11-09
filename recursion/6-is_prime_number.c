#include "main.h"

/**
 * checker - find if prime number.
 * @x: Value passed by is_prime_number.
 * @y: 2.
 *
 * Return: value back to is_prime_number.
 */
int checker(int x, int y)
{
if (x == y)
{
return (1);
}
else if (x % y == 0)
{
return (0);
}
else if (y >= (x / 2))
{
return (1);
}
return (checker(x, y + 1));
}

/**
 * is_prime_number - input integer is a prime number.
 * @n: Value.
 *
 * Return: 1 is prime number, 0 not prime number.
 */
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}

return (checker(n, 2));
}
