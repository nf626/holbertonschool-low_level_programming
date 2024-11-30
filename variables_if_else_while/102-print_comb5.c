#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *        without repeats.
 *
 * Numbers must be separated by ',', followed by a space.
 * only use putchar.
 * max of 8 putchar.
 * no type chars.
 *
 * Return: 0, Success
 */
int main(void)
{
int i = 0, j;
int num1, num2, num3, num4;

while (i < 100)
{
num1 = i / 10;
num2 = i % 10;
j = 0;
while (j < 100)
{
num3 = j / 10;
num4 = j % 10;
if (i < j && i != j)
{
putchar(num1 + '0');
putchar(num2 + '0');
putchar(' ');
putchar(num3 + '0');
putchar(num4 + '0');
if (i == 98 && j == 99)
{
break;
}
putchar(',');
putchar(' ');
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
