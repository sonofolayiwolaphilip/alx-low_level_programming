#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _strdup - Duplicates a string
* @str: The string to be duplicated
*
* Return: A pointer to the newly allocated memory
* containing the duplicated string,
* or NUL if str is NULL or if memory allocation fails
*/
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	return (strcpy(malloc(strlen(str) + 1), str));


}
