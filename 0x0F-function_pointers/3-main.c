#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - point of entry
 * @argc: argument counter
 * @argv: the value of the argument
 * Return: the appropriate
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2][0] == '+')
		result = num1 + num2;
	else if (argv[2][0] == '-')
		result = num1 - num2;
	else if (argv[2][0] == '*')
		result = num1 * num2;
	else if (argv[2][0] == '/')
	{
		if (num2 == 0)
		{
			printf("Error\n");
			return (100);
		}
		result = num1 / num2;
	}
	else if (argv[2][0] == '%')
	{
		if (num2 == 0)
		{
			printf("Error\n");
			return (100);
		}
		result = num1 % num2;
	}
	else
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", result);
	return (0);
}

