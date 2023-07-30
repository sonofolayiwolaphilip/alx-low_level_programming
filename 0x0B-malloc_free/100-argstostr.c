#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* argstostr - concatenates all the arguments of a program
* @ac: The argument count.
* @av: An array of strings containing the arguuments
* Return: A pointer to the concatenated string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i, index;

	int total_length;

	char *result;

	total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	result = malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	index = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index++] = '\n';
	}
	result[index] = '\0';

	return (result);
}
