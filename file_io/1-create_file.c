#include "main.h"

int create_file(const char *filename, char *text_content)
{
  int fd;

  if (filename == NULL)
    {
      return (-1);
    } 
  if (text_content == NULL)
    {
      fd = open(filename, O_RDWR | O_CREAT); 
    }
  else
    {
      fd = open(filename, O_RDWR | O_CREAT | O_EXCL | O_TRUNC);
    }

  close(fd);
  return (1);
}
