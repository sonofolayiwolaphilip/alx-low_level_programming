#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - function name
 * @ac: parameter
 * @av: second argument
 * Return: appropriate value on success or failure
 */
char *argstostr(int ac, char **av)
{
	int i, len_t = 0;
	char *new;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		len_t += strlen(av[i]) + 1;
	}

	new = (char *)malloc(len_t + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	new[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		strcat(new, av[i]);
		if (i < ac)
		{
			strcat(new, "\n");
		}
	}
	return (new);
}
