#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *        without repeats.
 *
 * Numbers must be separated by ',', followed by a space.
 * only use putchar.
 * max of 5 putchar.
 * no type chars.
 *
 * Return: 0, Success
 */
int main(void)
{
int num1 = '0', num2;

while (num1 <= '9')
{
num2 = '0';
while (num2 <= '9')
{
if (num2 == num1)
{
}
else if (num1 > num2)
{
}
else
{
putchar(num1);
putchar(num2);
if (num2 == '9' && num1 == '8')
{
break;
}
putchar(',');
putchar(' ');
}
num2++;
}
num1++;
}
putchar('\n');
return (0);
}
