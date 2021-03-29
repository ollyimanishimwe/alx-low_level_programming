#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: pointer to an string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}

/**
 * create_file - function that create a file
 * @filename: name of file to be created
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fd_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	fd_write = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (fd_write == -1)
		return (-1);
	return (1);
}
