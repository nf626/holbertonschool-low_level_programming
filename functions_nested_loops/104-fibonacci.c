#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers,
 *         starting with 1 and 2, followed by a new line.
 *
 * Return: 0, Success.
 */
int main(void)
{
int i = 0;
double prev = 1, next = 2, current;

while (i <= 99)
{
if (i > 2)
{
current = prev + next;
prev = next;
next = current;
printf(", %.lf", current);
}
else if (i == 1)
{
printf("%.lf", prev);
}
else if (i == 2)
{
printf(", %.lf", next);
}
i++;
}
printf("\n");
return (0);
}
