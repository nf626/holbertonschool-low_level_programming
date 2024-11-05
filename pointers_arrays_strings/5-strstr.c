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
int i;

while (*haystack != '\0')
{
i = 0;
while (needle[i] != '\0')
{
if (needle[i] == *haystack)
{
return (haystack);
}
else
{
break;
}
i++;
}
haystack++;
}
return (NULL);
}
