#include "main.h"

/**
 * append_text_to_file - Function to Appends text at the end of a file.
 * @filename: points to the name of the file.
 * @text_content: Terminates string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL  -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opened;
	int writing, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	opened = open(filename, O_WRONLY | O_APPEND);
	writing = write(o, text_content, len);
	if (opened == -1 || w == -1)
		return (-1);
	close(opened);
	return (1);
}
