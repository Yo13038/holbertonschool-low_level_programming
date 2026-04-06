#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * close_fd - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to be closed.
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the content of a file to another file.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 *
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	int from, to;
	ssize_t n_r, n_w;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(av[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
		close_fd(from), dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					av[2]), exit(99);
	while ((n_r = read(from, buffer, 1024)) > 0)
	{
		n_w = write(to, buffer, n_r);
		if (n_r != n_w)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close_fd(from), close_fd(to), exit(99);
		}
	}
	if (n_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		close_fd(from), close_fd(to), exit(98);
	}
	close_fd(from), close_fd(to);
	return (0);
}
