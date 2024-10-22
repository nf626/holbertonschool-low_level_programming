#include <stdio.h>

/**
 * main - Prints the size of various types on the computer
 * it is compiled and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %u", sizeof(char));
printf("Size of an int: %d\n", sizeof(int));
printf("Size of a long int: %lu", sizeof(long int));
printf("Size of a long long int: %lu", sizeof(long long int));
printf("Size of a float: %lu", sizeof(float));
return (0);
}
