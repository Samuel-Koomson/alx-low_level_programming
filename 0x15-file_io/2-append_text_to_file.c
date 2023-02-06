#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Function that appends text to a file
 * @filename: The name of the file to which text is being appeneded
 * @text_content: content to be appended to text file
 * Return: 1 upon success, -1 upon failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t y;

	if (text_content == NULL)
	{
		fd = open(filename, O_RDONLY, 0600);
		if (fd != -1)
			return (1);
		else
			return (-1);
	}
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	y = write(fd, text_content, strlen(text_content));
	if (y == -1)
		return (-1);
	close(fd);
	return (1);
}
