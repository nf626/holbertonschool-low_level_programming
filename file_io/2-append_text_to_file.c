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
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, wr;

if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}

if (text_content != NULL)
{
wr = write(fd, text_content, str_length(text_content));
if (wr == -1)
{
return (-1);
}
return (1);
}

close(fd);
return (1);
}
