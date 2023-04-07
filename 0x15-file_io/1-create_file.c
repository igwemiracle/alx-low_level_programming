#include "main.h"

/**
 * create_file - function will create a file
 * @filename:  name of file to be created
 * @text_content: text to be written in new file
 * Return: function will return 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, writer;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
	}

	text_content = "";

	while (text_content[i] != '\0')
	{
		i++;
	}
	writer = write(fd, text_content, i);
	if (writer == -1)
		return (-1);

	return (1);
}
