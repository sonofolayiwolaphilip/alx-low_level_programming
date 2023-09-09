#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - function name
 * @s1: first
 * @s2: second arguement
 * @n: counter for s2
 * Return: appropriate values
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	size_t len1, len2, result_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len1 < n)
	{
		result_len = len1 + len2;
	}
	else
	{
		result_len = len1 + n;
	}
	ptr = (char *)malloc(result_len + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(ptr, s1);
		strncat(ptr, s2, n);
		return (ptr);
	}
}
