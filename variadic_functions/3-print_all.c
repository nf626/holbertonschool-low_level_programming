#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - function that prints char.
 * @comma: comma between words and numbers.
 * @args: argument list.
 *
 */
void print_char(char *comma, va_list args)
{
printf("%s%c", comma, va_arg(args, int));
}

/**
 * print_int - function that prints int.
 * @comma: comma between words and numbers.
 * @args: argument list.
 *
 */
void print_int(char *comma, va_list args)
{
printf("%s%d", comma, va_arg(args, int));
}

/**
 * print_float - function that prints float.
 * @comma: comma between words and numbers.
 * @args: argument list.
 *
 */
void print_float(char *comma, va_list args)
{
printf("%s%f", comma, va_arg(args, double));
}

/**
 * print_char_pointer - function that prints char *.
 * @comma: comma between words and numbers.
 * @args: argument list.
 *
 */
void print_char_pointer(char *comma, va_list args)
{
char *str;
str = va_arg(args, char *);
if (str == NULL)
{
printf("%s%s", comma, "(nil)");
return;
}
printf("%s%s", comma, str);
}

/**
 * print_all -  function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0, j;
char *comma = "";
va_list args;
format_list format_types[] = { {"c", print_char}, {"i", print_int},
			       {"f", print_float}, {"s", print_char_pointer}};

va_start(args, format);

while (format != NULL && format[i])
{
j = 0;
while (j < 4)
{
if (format[i] == *format_types[j].ptr)
{
format_types[j].function_ptr(comma, args);
comma = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}
