#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char();
void print_int();
void print_float();
void print_char_pointer();

/**
 * print_all -  function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 */
void print_all(const char * const format, ...)
{
  print_list[] = {{},
		  {NULL, NULL}};

  unsigned int i = 0;
  va_list args;
  va_start(args, format);
  printf("\n");
  va_end(args);
}
