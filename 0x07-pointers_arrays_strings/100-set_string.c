#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * set_string - it set teh value of a pointer to a character
 * @s: Pointer to the pointer
 * @to: pointer housing the address of the string to set the pointer to
 */
void set_string(char **s, char *to)
{
	int len, a;

	if (to == NULL)
	{
		*s = NULL;
	}
	else
	{
		len = 0;
		while (to[len] != '\0')
		{
			len++;
		}
	*s = (char *)malloc((len + 1) * sizeof(char));
	if (*s == NULL)
	{
		printf("memory allocation error. \n");
		return;
	}

	for (a = 0; a <= len; a++)
	{
		(*s)[a] = to[a];
	}
	}
}
