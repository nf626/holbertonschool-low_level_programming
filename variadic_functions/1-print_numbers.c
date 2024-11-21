#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
int num = 0;
va_list args;

va_start(args, n);

while (i < n)
{
num = va_arg(args, int);
printf("%d", num);
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
i++;
}
printf("\n");
va_end(args);
}
