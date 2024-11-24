#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

typedef struct {
  char *ptr;
  void (*function_ptr)(char *comma, va_list args); /** separator ',' */
} format_list;

/** function declaration/prototype */
void print_char(char *comma, );
void print_int(char *comma, );
void print_float(char *comma, );
void print_char_pointer(char *comma, );

/**
 * print_all -  function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 */

/** print_all("ceis", 'B', 3, "stSchool"); */
void print_all(const char * const format, ...)
{
  /** structure stores format_types variable into 2D array = *prt -> c, *function_ptr -> print_char 
      eg. array[0] = c, go into print_char function */
  format_list format_types = {{"c", print_char},
			      {"i", print_int},
			      {"f", print_float},
			      {"s", print_char_pointer}};
  va_list args;
  va_start(args, format); /** points to first element in variadic function eg. B -> 3 -> stSchool */

  va_end(args);

  return;
}

/** function definition - void return nothing */
void print_char(char *comma, va_list args)
{
  printf("%s%c\n", comma, );
}

void print_int(char *comma, va_list args)
{
  printf("%s%d\n", comma, );
}

void print_float(char *comma, va_list args)
{
  printf("%s%f\n", comma, );
}

void print_char_pointer(char *comma, va_list args)
{
  char *str;
  /** assign the string (the pointer to the first character of the string) to str. 
      extracts the next argument from the args list, expecting it to be a string (char *),
      and assigns it to the variable str.
      retrieves the next argument from the args list, and it's expected to be a char * (a string).
      The returned value is stored in the pointer str.
  */
  str = va_arg(args, char *); 
  if (str == NULL)
    {
      printf("%s%s", comma, "(nil)");
    }
  printf("%s%s\n", comma, str);
}
