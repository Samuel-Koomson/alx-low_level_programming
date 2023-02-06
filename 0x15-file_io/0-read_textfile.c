#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints to stdout
 * @filename: The file from which the function is reading and printing
 * @letters: The number of letters being read and printed
 * Return: 0 if `filename` is NULL, 0 if write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t frd, fwd;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	frd = read(fd, buffer, letters);
	fwd = write(STDOUT_FILENO, buffer, frd);

	close(fd);
	free(buffer);

	return (fwd);
}
