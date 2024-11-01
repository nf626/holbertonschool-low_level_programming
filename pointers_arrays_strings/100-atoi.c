#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 */
int _atoi(char *s)
{
  int math = 0, size = 0, minus, plus, result;

  while (s[size] != '\0')
    {
      if (s[size] == '-')
	{
	  minus = minus * -1; //-1
	}
      else if (s[size] == '+')
	{
	  plus = plus * 1; //1
	}
     
      while (s[size] < 58 && s[size] > 48)
	{
	  math = minus + plus + 
	  size++; 
	}
      size++;
    }

  result = result *;
  return (result);
}
