#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * main - program that adds positive numbers.
 * @argc: counter
 * @argv: variables
 * Return: 1 on failure and 0 on success
 */
int main(int argc, char *argv[])
{
	int add, i;
	long number;
	char *lastptr;


	add = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
	number = strtol(argv[i], &lastptr, 10);

	if (*lastptr != '\0' || number > INT_MAX)
	{
		printf("Error\n");
		return (1);
	}
		add += number;
	}
	if (add == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", add);
	}
	return (0);
}
