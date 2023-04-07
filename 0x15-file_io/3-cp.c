#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
  * print_error - Entry point
  * @message: the message
  * @filename: name of file
  * @code: code
  * Return: nothing
  */

void print_error(const char *message, const char *filename, int code)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error("Usage: %s file_from file_to\n", argv[0], 97);
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int fd_from = open(file_from, O_RDONLY);

	if (fd_from < 0)
	{
		print_error("Error: Can't read from file %s\n", file_from, 98);
	}

	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to < 0)
	{
		print_error("Error: Can't write to %s\n", file_to, 99);
	}

	char buffer[BUFFER_SIZE];
	ssize_t nread;

	while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, nread) != nread)
		{
			print_error("Error: Can't write to %s\n", file_to, 99);
		}
	}

	if (nread < 0)
	{
		print_error("Error: Can't read from file %s\n", file_from, 98);
	}

	if (close(fd_from) < 0)
	{
		print_error("Error: Can't close fd %d\n", fd_from, 100);
	}

	if (close(fd_to) < 0)
	{
		print_error("Error: Can't close fd %d\n", fd_to, 100);
	}

	return (0);
}
