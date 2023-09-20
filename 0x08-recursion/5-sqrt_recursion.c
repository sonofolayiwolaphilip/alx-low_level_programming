#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
* _sqrt_recursion - function that calculate natural square root of a number
* @n: The associating argument
* Return: the square root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
* actual_sqrt_recursion - recursion to
* @n: associating value
* @i: iterator
* Return: square root
*/

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
