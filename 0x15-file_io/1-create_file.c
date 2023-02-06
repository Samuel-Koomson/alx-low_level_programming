#include "main.h"
#include <string.h>

/**
 * create_file - Function that creates a file
 * @filename: Name of file to be created
 * @text_content: The content of text in the file
 * Return: 1 upon success, -1 upon failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t y;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	y = write(fd, text_content, strlen(text_content));
	if (y == -1)
		return (-1);

	close(fd);
	return (1);
}
