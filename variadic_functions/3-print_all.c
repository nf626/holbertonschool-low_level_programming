#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

typedef struct {
  char *ptr;
  void (*function_ptr)();
} format_list;

/** function declaration/prototype */
void print_char();
void print_int();
void print_float();
void print_char_pointer();

/**
 * print_all -  function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 */

/** print_all("ceis", 'B', 3, "stSchool"); */
void print_all(const char * const format, ...)
{
  /** structure 2D array - *prt -> c, *function_ptr ->  */
  format_list format_types = {{"c", },
			      {"i", },
			      {"f", },
			      {"s", }};
  va_list args;
  va_start(args, format);

  va_end(args);

  return;
}

/** function definition - void return nothing */
void print_char()
{
  printf("%c\n", );
}
void print_int()
{
  printf("%d\n",);
}
void print_float()
{
  printf("%f\n",);
}
void print_char_pointer()
{
  if (string == NULL)
    {
      printf("%s\n", "(nil)");
    }
  printf("%s\n",);
}
