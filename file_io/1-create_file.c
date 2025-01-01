#include "main.h"

/**
 * str_length - Find string length.
 * @string: pointer to null terminated string.
 *
 * Return: length of string.
 */
int str_length(char *string)
{
int length = 0;

while (string[length] != '\0')
{
length = length + 1;
}

return (length);
}
/**
 * create_file - Function that creates a file.
 * @filename: name of the file to create.
 * @text_content: string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd;

if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
{
return (-1);
}

if (text_content != NULL)
{
write(fd, text_content, str_length(text_content));
}
else
{
fd = open(filename, O_RDWR | O_CREAT);
if (fd == -1)
{
return (-1);
}
return (1);
}

close(fd);
return (1);
}
