#include "holberton.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

void copy_file(char *src, char *new);
void print_error(int num, char *filename);

/**
 * main - copy file
 * @ac: argument count
 * @av: arguements
 * Return: 0
 */
int main(int ac, char **av)
{
	if (ac != 3)
		print_error(97, av[0]);
	copy_file(av[1], av[2]);
	return (0);
}

/**
 * copy_file - copy and create new file
 * @src: source file
 * @new: new file
 * Return: 0
 */
void copy_file(char *src, char *new)
{
	int fd1, fd2, input, output, end1, end2;
	char *buffer = NULL;

	fd1 = open(src, O_RDONLY);
	if (fd1 == -1)
		print_error(98, src);
	fd2 = open(new, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
		print_error(99, new);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return;
	input = read(fd1, buffer, 1024);
	if (input == -1)
		print_error(98, src);
	output = write(fd2, buffer, input);
	if (output == -1)
		print_error(99, new);
	end1 = close(fd1);
	if (end1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
	end2 = close(fd2);
	if (end2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
	free(buffer);
}

/**
 * print_error - print error messages
 * @num: error number
 * @filename: file name
 * Return: 0
 */
void print_error(int num, char *filename)
{
	if (num == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (num == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", filename);
	else if (num == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(num);
}
