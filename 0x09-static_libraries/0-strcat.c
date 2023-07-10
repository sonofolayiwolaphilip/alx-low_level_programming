#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: input value
* @source: input value
* Return: void
*/

char *_strcat(char *dest, char *source)

{

	int i;

	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (source[j] != '\0')
	{
		dest[i] = source[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
