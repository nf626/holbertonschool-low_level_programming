#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: Hello
 * @s2: World!
 *
 * Return: results.
 */
int _strcmp(char *s1, char *s2)
{
  // 0 both strings are same s1 == s2
  // > 0 not matching, s1 > s2 ASCII value 
  // < 0 not matching, s1 < s2 ASCII value

  int i = 0, j = 0;
  int value;

  while (s1[i] != '\0')
    {
      i++;
    }
  while (s2[j] ! '\0')
    {
      if (s1[i] != s2[j] && s1[i] > s2[j])
	{
	  value = *s1 - *s2;
	}
      else if (s1[i] != s2[j] && s1[i] < s2[j])
	{
	  value = *s2 - *s1;
	}
      i++;
      j++;
    }
  
}
