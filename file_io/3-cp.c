#include "main.h"

/**
 * copy_file - Program that copies the content of a file to another file.
 * @source: source file to copy.
 * @dest: copy of source file to destination file.
 */
void copy_file(char *source, char *dest)
{
  int source_fd, dest_fd, FD_VALUE;
  char buffer[1024];

}

/**
 * main - Entry point to program.
 * @argc: the number of command-line arguments.
 * @argv: array of character pointers listing all the arguments.
 *
 * Return: 0, Success.
 */
int main(int argc, char *argv[])
{
  if (argc != 3)
    {
      dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
      exit(97);
    }

  copy_file(argv[1], argv[2]);
  
  return (0);
}
