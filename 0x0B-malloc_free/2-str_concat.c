#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* str_concat - Concatenates two strings
* @s1: The first string
* @s2: The second string
*
* Return: Pointer to the concatenated string or NULL on failure
*/
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, totalLength;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	totalLength = len1 + len2;

	result = malloc((totalLength + 1) * sizeof(char));

	if (result == NULL)

		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
