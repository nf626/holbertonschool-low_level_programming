#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Checks for alphabet character.
 * @c: character is checked.
 *
 * Return: 1 if c is a letter, lowercase, uppercase. Otherwise 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
