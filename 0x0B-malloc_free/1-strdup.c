#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - string duplicating functions
 * @str: string to copy
 * Return: appropriate values
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = (char *)malloc((strlen(str) + 1) * (sizeof(char)));
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}
