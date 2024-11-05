#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring.
 * @haystack: String.
 * @needle: Substring.
 *
 * Return: Substring or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != 0)
{
char *ph = haystack;
char *pn = needle;

while (*ph == *pn && *pn != '\0')
{
ph++;
pn++;
}
if (*pn == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
