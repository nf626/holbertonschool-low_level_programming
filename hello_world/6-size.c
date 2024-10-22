#include <stdio.h>

/**
 * main - Prints the size of various types on the computer
 * it is compiled and run on.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
/**
 *size of takes argument
 * % z - Bytes 
 */
printf("Size of a char: %zu", sizeof(char));
printf("Size of an int: %zu\n", sizeof(int));
printf("Size of a long int: %zu", sizeof(long int));
printf("Size of a long long int: %zu", sizeof(long long int));
printf("Size of a float: %zu", sizeof(float));
return (0);
}
