#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: points to the name of the file.
 * @text_content: Terminates string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL  -1.
 * If the file does not exist the user lacks write permissions  -1.
 * Or else - 1.
 * */

int append_text_to_file(const char *filename, char *text_content)
{
	int opening, width, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opening = open(filename, O_WRONLY | O_APPEND);
	width = write(opening, text_content, length);

	if (opening == -1 || width == -1)
		return (-1);

	close(opening);

	return (1);
}
