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
	int total_length = 0;

	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	char *result = malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	int index = 0;

	for (int i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index++] = '\n';
	}
	result[index] = '\0';

	return (result);
}

/**
* main - Entry point of the program
* @argc: The argument count.
* @argv: An array of strings containing the arguements*
* Return: 0 on success, 1 on failure.
*/
int main(int argc, char **argv)
{
	char *concatenated = argstostr(argc, argv);

	if (concatenated == NULL)
	{
		printf("Failed to concatenate arguments.\n ");
		return (i);
	}

	printf("concatenated arguments:\n%s", concatenated);
	free(concatenated);

	return (0);
}
