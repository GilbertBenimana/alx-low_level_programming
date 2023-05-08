#include "main.h"

/**
  * read_textfile - reads a file and prints it to the POSIX
  * @filename: source file
  * @letters: number of letters to be read and printed
  * Description: reads a file and prints it to the POSIX
  * Return: returns ssize_t
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, rd;
char *buff = malloc(sizeof(char *) * letters);
if (!buff)
return (0);
if (!filename)
return (0);
fd = open(filename, O_RDONLY, 0600);
if (fd == -1)
return (0);
rd = read(fd, buff, letters);
write(STDOUT_FILENO, buff, rd);
free(buff);
close(fd);
return (rd);
}
