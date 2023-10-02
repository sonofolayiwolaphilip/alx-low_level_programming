#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints to  POSIX
 * @filename: Pointer
 * @letters: number of letters it should read and print
 * Return: 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filled, win, twin;
	char *buffer;

	filled = open(filename, O_RDONLY);

	if (filled == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	twin = read(filled, buffer, letters);

	win = write(STDOUT_FILENO, buffer, twin);

	free(buffer);

	close(filled);
	return (win);
}
