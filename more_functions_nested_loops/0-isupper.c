#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Checks for uppercase character.
 * @c: character is checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
