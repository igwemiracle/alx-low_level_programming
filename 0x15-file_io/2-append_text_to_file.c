#include <string.h>
#include "main.h"

/**
 * append_text_to_file - creates a file and puts text in it
 * @filename: name for file
 * @text_content: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writer;

	if (filename)
	{
		fd = open(filename, O_WRONLY |  O_APPEND);
		if (fd == -1)
			return (-1);

		writer = write(fd, text_content, strlen(text_content));
		if (text_content)
		{
			if (writer == -1)
				return (-1);
		}

		close(fd);
		return (1);
	}

	return (-1);
}
