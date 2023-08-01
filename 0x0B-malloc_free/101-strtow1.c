#include <stdlib.h>
#include <string.h>
#include "main.h"
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
void copy_word(char **dest, const char *src)
{
	int Lengthofword;
        char *wordBegin = (char *)src;

        while (*src != ' ' && *src != '\0')
                src++;

        Lengthofword = src - wordBegin;

        *dest = (char *)malloc((Lengthofword + 1) * sizeof(char));
        if (*dest == NULL)
        {
                printf("Memory allocation failed\n");
                exit(EXIT_FAILURE);
        }
        strncpy(*dest, wordBegin, Lengthofword);
        (*dest)[Lengthofword] = '\0';
}
/**
 * strtow - function to split
 * @str: expected string
 * Return: return phrase on success
 */

char **strtow(char *str)
{
	int wordcount, index, i;
	char **phrase;
	char *ptr;
	char **wordArray;

	if (str == NULL || *str == '\0')
		return (NULL);

	wordcount = count_words(str);

	if (wordcount == 0)
		return (NULL);

	phrase = (char **)malloc((wordcount + 1) * sizeof(char *));

	if (phrase == NULL)
	{
		printf("Memory allocation failed \n");
		return (NULL);
	}
	ptr = str;

	index = 0;

	while (*ptr != '\0')
	{
		while (*ptr == ' ')
			ptr++;
		if (*ptr != '\0')
		{
		copy_word(&phrase[index], ptr);
		index++;
		}
	}
	return (phrase);
}

