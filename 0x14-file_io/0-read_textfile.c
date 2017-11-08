#include "holberton.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - read a text file and print
 * @filename: file name
 * @letters: numbers of letters in the file
 * Return: numbers of letters read and print; 0 when file can't be opened
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	read(fd, buffer, letters);
	num = write(STDOUT_FILENO, buffer, letters);
	close(fd);
	free(buffer);
	return (num);
}
