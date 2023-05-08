#include <stdio.h>
#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: source file
  * @text_content: char
  * Description: appends text at the end of a file
  * Return: returns int
  */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (text_content)
{
if (write(fd, text_content, _strlen(text_content)) == -1)
return (-1);
}
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
