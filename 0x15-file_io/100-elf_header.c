#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments.
 * @argv: arguments
 *  Description: copies the content of a file to another file
 * Return: returns 0 for sucess
 */
int main(int argc, char *argv[])
{

int fd;
ssize_t s;
char buf[5];
char elf[1];

if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: cp file\n");
exit(97); }
fd = open(argv[1], O_RDWR);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", argv[1]);
exit(98); }
s = read(fd, buf, 4);
if (s == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98); }
s = lseek(fd, 1, SEEK_SET);
s = read(fd, elf, 1);
if (elf[0] != 'E')
exit(98);
close(fd);
return (0);
}
