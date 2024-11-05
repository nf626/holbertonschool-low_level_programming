#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: bytes.
 *
 * Return: s pointer.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
    int i = 0;

    
    while (*s != '\0') {
        while (accept[i] != '\0') {
            if (*s == accept[i]) {
                count++;
                break;
            }
            i++;
        }

       
        if (accept[i] == '\0') {
            break;
        }
        s++;  
    }

    return count;
}
