#include "holberton.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int _strlen(char *s);

/**
 * create_file - create a new file
 * @filename: file name
 * @text_content: contents
 * Return: 1 success; -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	write(fd, text_content, _strlen(text_content));
	close(fd);
	return (1);
}

/**
 * _strlen - count string length
 * @s: first address of strsng array
 *
 * Description: take a string array address and return the length
 * Return: lenghth of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
