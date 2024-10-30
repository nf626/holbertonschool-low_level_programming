#include "main.h"
11;rgb:2b2b/2b2b/2b2b#include <stdio.h>

/**
 * rev_string - reverse a string.
 * @s: s variable.
 *
 */
void rev_string(char *s)
{
int i, j, k;

for (k = 0; s[k] != '\0'; k++)
{
}

for (i = 0, j = k - 1; i < j; i++, j--)
{
int c;

c = s[i];
s[i] = s[j];
s[j] = c;

}
}
