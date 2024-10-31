#include "main.h"

/**
 * puts_half - prints half of a string.
 * function should print the second half of the string.
 * characters is odd, the function should print the last n characters.
 * @str: str variable.
 *
 */
void puts_half(char *str)
{
int length_of_the_string = 0;
int n, i;

while (str[length_of_the_string] != '\0')
{
length_of_the_string = length_of_the_string + 1;
}

n = (length_of_the_string - 1) / 2;

i = n + 1;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
