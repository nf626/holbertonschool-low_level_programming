#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all -  function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 */
void print_char(char *comma, va_list args)
{
  printf("%s%c\n", comma, va_arg(args, int));
}

/**
 * print_int -  function that prints integers.
 * @comma: list of types of arguments passed to the function.
 * @args:
 *
 */
void print_int(char *comma, va_list args)
{
  printf("%s%d\n", comma, va_arg(args, int));
}

/**
 * print_all -  function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 */
void print_float(char *comma, va_list args)
{
  printf("%s%f\n", comma, va_arg(args, double));
}

/**
 * print_char_pointer -  function that prints anything.
 * @format: list of types of arguments passed to the function.
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
  printf("%s%s\n", comma, str);
}

/**
 * print_all -  function that prints anything.
 * @format: list of types of arguments passed to the function.
 *
 */

/** print_all("ceis", 'B', 3, "stSchool"); */
void print_all(const char * const format, ...)
{
  unsigned int i = 0, j = 0;
  char *comma = "";
  va_list args;
  /** structure stores format_types variable into 2D array = *prt -> c, *function_ptr -> print_char 
      eg. array[0] = c, go into print_char function */
  format_list format_types[] = {{"c", print_char}, {"i", print_int},
			      {"f", print_float}, {"s", print_char_pointer}};

  va_start(args, format); /** points to first element in variadic function eg. B -> 3 -> stSchool */

  while (format != NULL && format[i] != 0) /** format not empty and is true */
    {
      while (j < 4)
	{
	  if (format[i] == *format_types[j].ptr)
	    {
	      format_types[j].function_ptr(comma, args);
	      comma = ",";
	    }
	  j++;
	}
      i++;
    }
  va_end(args);
  printf("\n");
}
