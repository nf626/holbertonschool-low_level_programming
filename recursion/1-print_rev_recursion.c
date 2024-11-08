#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reverse.
 * @s: s argument.
 *
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s = s + 1;
_print_rev_recursion(s);
s = s - 1;
_putchar(*s);
}
