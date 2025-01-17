#include "main.h"
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and prints
 *                 it to the POSIX standard output.
 * @filename: pointer to read file.
 * @letters: number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
int fd, nb_read, nb_write;

if (filename == NULL)
{
return (0);
}
buffer = malloc(sizeof(*buffer) * letters);
if (buffer == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}
nb_read = read(fd, buffer, letters);
if (nb_read == -1)
{
free(buffer);
close(fd);
return (0);
}
nb_write = write(STDOUT_FILENO, buffer, nb_read);
if (nb_write == -1)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (nb_write);
}
