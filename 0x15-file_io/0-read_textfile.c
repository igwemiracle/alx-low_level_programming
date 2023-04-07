#include "main.h"

/**
  * read_textfile - reads from a text file
  * @filename: name of file
  * @letters: number of letters to read
  * Return: actual number of letters read, 0 if end of file
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, reader;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (filename)
	{
		fd = open(filename, O_RDONLY);
		if (fd == -1)
			return (0);
	}

	reader = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, reader);

	free(buff);
	close(fd);

	return (reader);
}
