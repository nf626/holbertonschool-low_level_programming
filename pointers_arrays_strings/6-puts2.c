#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character.
 * @str: str variable.
 *
 */
void puts2(char *str)
{
int temp;

for (temp = 0; str[temp] != '\0'; temp++)
{
if (temp % 2 == 0)
{
_putchar(str[temp]);
}
}
_putchar('\n');
}
