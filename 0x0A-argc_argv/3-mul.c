#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - multiply two numbers
 * @num1: first number
 * @num2: second number
 *
 *Return: The product of the two numbers.
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - to multiply two numbers
 * @argc: it is the counter
 * @argv: it is the arry associated
 *
 * Return: The product of the two numbers.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply(num1, num2);

	printf("The multiplication of %d and %d is: %d\n", num1, num2, result);

	return (0);

}
