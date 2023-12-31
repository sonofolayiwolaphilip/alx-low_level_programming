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

	if (operator == '+' || operator == '-' ||
			operator == '*' || operator == '/' ||
			operator == '%')
	{
		if ((operator == '/' || operator == '%') && num2 == 0)
		{
			printf("Error\n");
			return (100);
		}
		calc = (operator == '+') ? num1 + num2 :
			(operator == '-') ? num1 - num2 :
			(operator == '*') ? num1 * num2 :
			(operator == '/') ? num1 / num2 :
			(operator == '%') ? num1 % num2 : 0;
		printf("%d\n", calc);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (99);
	}
}
