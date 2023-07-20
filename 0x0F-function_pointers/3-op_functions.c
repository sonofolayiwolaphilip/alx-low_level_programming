#include "3-calc.h"

/**
 * add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of @a and @b.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * subtract - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference between @a and @b.
 */
int subtract(int a, int b)
{
	return (a - b);
}

/**
 * multiply - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of @a and @b.
 */
int multiply(int a, int b)
{
	return (a * b);
}

/**
 * divide - Divides two integers.
 * @a: The first integer (dividend).
 * @b: The second integer (divisor).
 *
 * Return: The result of the division of @a by @b.
 *         If @b is 0, return -1 to indicate division by zero error.
 */
int divide(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (-1);
	}
}

/**
 * modulo - Calculates the remainder of the division of two integers.
 * @a: The first integer (dividend).
 * @b: The second integer (divisor).
 *
 * Return: The remainder of the division of @a by @b.
 *         If @b is 0, return -1 to indicate division by zero error.
 */
int modulo(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (-1);
	}
}
