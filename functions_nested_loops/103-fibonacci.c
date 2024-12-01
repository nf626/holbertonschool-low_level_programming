#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms,
 *        followed by a new line.
 *
 * Return: 0, Success.
 */
int main(void)
{
long prev = 0, next = 1, sum = 0, total = 0;

while (sum < 4000000)
{
sum = prev + next;
if (sum % 2 == 0)
{
total = total + sum;
}
prev = next;
next = sum;
}
printf("%ld\n", total);
return (0);
}
