#include "main.h"

/**
 * copy_file - Program that copies the content of a file to another file.
 * @source: source file to copy.
 * @dest: copy of source file to destination file.
 */
void copy_file(const char *source, const char *dest)
{
  int source_fd, dest_fd, rd;
  char buffer[1024];

  source_fd = open(source, O_RDONLY);
  if (source == NULL || source_fd == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
      exit(98);
    }

  dest_fd = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);

  while ((rd = read(source_fd, buffer, 1024) > 0))
    {
      if (write(dest_fd, buffer, rd) != rd || dest_fd == -1)
	{
	  dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
	  exit(99);
	}
    }

  if (rd == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
      exit(98);
    }

  if (close(source_fd) == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
      exit(100);
    }

  if (close(dest_fd) == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
      exit(100);
    }
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
  exit(0);
}
