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
	int s2_len, i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	char *ptr = (char *)malloc(strlen(s1) + n + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(ptr, s1);
		if (n >= strlen(s2))
		{
			strcat(ptr, s2);
		}
		else
		{
			s2_len = strlen(s2);
			for (i = 0; i < n; i++)
			{
				strcat(ptr, &s2[i]);
			}
		}
		return (ptr);
	}
}
