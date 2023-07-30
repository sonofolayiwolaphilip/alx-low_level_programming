#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"

/**
 * number_check - to check for digit
 * @str: array of string
 * Return: return 0 on success
 */
int number_check(char *str)
{
	unsigned int counter = 0;

	while (counter < strlen(str))
	{
		if (!isdigit(str[counter]))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

/**
 * main - entering point
 * @argc: counter
 * @argv: The Argument to be received
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int counter;
	int convertedstring;
	int total = 0;

	counter = 1;

	while (counter < argc)
	{
		if (number_check(argv[counter]))
		{
			convertedstring = atoi(argv[counter]);
			total += convertedstring;
		}
		else
		{
			printf("error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", total);
	return (0);
}
