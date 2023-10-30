#include "main.h"

#include <stdlib.h>


/**
 * read_textfile- Reading text file
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)

{

	char *buffing;

	ssize_t feed;

	ssize_t width;

	ssize_t tyre;

	feed = open(filename, O_RDONLY);

	if (feed == -1)
		return (0);
	buffing = malloc(sizeof(char) * letters);
	tyre = read(feed, buffing, letters);
	w = write(STDOUT_FILENO, buffing, tyre);
	free(buffing);
	close(feed);
	return (width);
}
