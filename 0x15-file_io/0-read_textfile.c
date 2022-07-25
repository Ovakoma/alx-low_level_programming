#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, read_file, write_file;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	read_file = read(fd, buf, letters);
	if (read_file == -1)
	{
		free(buf);
		return (0);
	}
	write_file = write(STDOUT_FILENO, buf, read_file);
	if (write_file == -1 || read_file != write_file)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (write_file);
}
