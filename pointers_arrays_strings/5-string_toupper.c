#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase.
 * 
 *
 *
 */
char *string_toupper(char *c)
{
  int i = 0;
  

  while (c[i] != '\0')
    {
      i++;
    }
  while (c[i] <= 'a' && c[i] >= 'z')
    {
     i++;
    }
  
  return (c);
}
