#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *string;
va_list args;

va_start(args, n);

while (i < n)
{
string = va_arg(args, char*);
if (string == NULL)
{
printf("%s", "(nil)");
}
else
{
printf("%s", string);
}
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
i++;
}
printf("\n");
va_end(args);
}
