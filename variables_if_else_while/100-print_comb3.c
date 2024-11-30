#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
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
putchar(num1);
putchar(num2);

if ((num1 != '9') || (num1 == '9' && num2 != '9'))
{
putchar(',');
putchar(' ');
}
num2 = num2 + 1;
}
num1 = num1 + 1;
}
putchar('\n');
return (0);
}
