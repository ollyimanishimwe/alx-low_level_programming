#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *main - Program that copies the content of a file into another file
 *@argv: input arguments
 *@argc: quantity of arguments
 *Return: nothing
 */

int main(int argc, char *argv[])
{
	int fd, fd_to;
	int check_in, check_out;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]), exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]),
			exit(99);
	}
	check_in = check_out = 1;
	while (check_in)
	{
		check_in = read(fd, buff, 1024);
		if (check_in == -1)
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]),
				exit(98);
		if (check_in > 0)
		{
			check_out = write(fd_to, buff, check_in);
			if (check_out == -1)
				dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]),
					exit(99);
		}
	}
	check_out = close(fd);
	if (check_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd),
			exit(100);
	check_out = close(fd_to);
	if (check_out == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to),
			exit(100);
	return (0);
}
