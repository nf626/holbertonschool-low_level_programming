#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isdigit - Checks if a digit 0 through 9.
 * @c: character is checked.
 *
 * Return: 1 if c is digit, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}

}
