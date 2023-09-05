#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - string concatenation
 * @s1: first string
 * @s2: second string
 * Return: NUll on failure and pointer on success
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
