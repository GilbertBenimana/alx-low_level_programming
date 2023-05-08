#include "main.h"

/**
  * create_file - a function that creates a file
  * @filename: source file
  * @text_content: char
  * Description: a function that creates a file
  * Return: returns int
  */
int create_file(const char *filename, char *text_content)
{
int fd;
if (!filename)
return (-1);
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content)
write(fd, text_content, _strlen(text_content));
close(fd);
return (1);
}

/**
  * _strlen - returns length of the passed string
  * @s: string to be counted
  * Description: returns length of the passed string
  * Return: returns int
  */
int _strlen(char *s)
{
int c = 0;
while (s[c])
c++;
return (c);
}
