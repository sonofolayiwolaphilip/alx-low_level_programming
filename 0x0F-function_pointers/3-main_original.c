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
	int num1, num2, calc;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2][0];

	if (operator == '+')
		calc = num1 + num2;
	else if (argv[2][0] == '-')
		calc = num1 - num2;
	else if (argv[2][0] == '*')
		calc = num1 * num2;
	else if (argv[2][0] == '/')
	{
		if (num2 == 0)
		{
			printf("Error\n");
			return (100);
		}
		calc = num1 / num2;
	}
	else if (argv[2][0] == '%')
	{
		if (num2 == 0)
		{
			printf("Error\n");
			return (100);
		}
		calc = num1 % num2;
	}
	else
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", calc);
	return (0);
}

