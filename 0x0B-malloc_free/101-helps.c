#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * count_words -helping function to count words
 * @str: associated string
 * Return:to return count on success
 */
int count_words(const char *str)
{
	int count = 0;

	char *ptr = (char *)str;

	while (*ptr != '\0')
	{
		while (*ptr == ' ')
			ptr++;
		if (*ptr != '\0')
		{
			count++;
			while (*ptr != ' ' && *ptr != '\0')
				ptr++;
                }
	}
	return (count);
}
/**
 * copy_word- helping function to copy word
 * @dest: the destination
 * @src: the source of the file
 */
static void copy_word(char **dest, const char *src)
{
	char *wordBegin = (char *)src;

	while (*src != ' ' && *src != '\0')
		src++;

	int LengthofWord = src - wordBegin;

	*dest = (char *)malloc((lengthofWord + 1) * sizeof(char));
	if (*dest == NULL)
	{
		printf("Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	strncpy(*dest, wordBegin, LengthofWord);
	(*dest)[LengthofWord] = '\0';
}
