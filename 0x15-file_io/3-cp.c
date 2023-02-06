#include "main.h"
#include <stdio.h>

#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
 * printfail - Helper function that prints failed message
 * @arg: Parameter argument to be printed
 * @flag: Helps to print different messages
 * Return: void
 */
void printfail(char *arg, int flag)
{
	if (flag == 1)
		dprintf(SE, "Error: Can't write to %s\n", arg);
	dprintf(SE, "Error: Can't read from file %s\n", arg);
}
/**
 * main - Function copies content of file to another file
 * @argc: Argument count
 * @argv: Array of arguments
 * Return: Always true
 */
int main(int argc, char *argv[])
{
	int xfd, yfd, ist, ost;
	char buf[MAXSIZE];

	if (argc != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	xfd = open(argv[1], O_RDONLY);
	if (xfd == -1)
		printfail(argv[1], 0), exit(98);
	yfd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (yfd == -1)
		printfail(argv[2], 1), exit(99);
	do {
		ist = read(ifd, buf, MAXSIZE);
		if (ist == -1)
			printfail(argv[1], 0), exit(98);
		if (ist > 0)
		{
			ost = write(yfd, buf, (ssize_t) ist);
			if (ost == -1)
				printfail(argv[2], 1), exit(99);
		}
	} while (ist > 0);
	ist = close(xfd);
	if (ist == -1)
		dprintf(SE, "Error: Can't close fd %d\n", xfd), exit(100);
	ost = close(yfd);
	if (ost == -1)
		dprintf(SE, "Error: Can't close fd %d\n", yfd), exit(100);
	return (0);
}
