#include "main.h"
/**
 * create_file - Function to create a file
 * @filename: Pointer to the name of the file to create
 * @text_content: Pointer to string to write to the file
 * Return: -1 if it fails and 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int filled, win, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}
	filled = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0060);

	win = write(filled, text_content, lenght);

	if (filled == -1 || win == -1)
		return (-1);

	close(filled);
	return (1);
}
