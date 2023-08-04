#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_binary - to print the binary of integers
 * @n: argument passed
 * Return: return the right value
 */
void print_binary(unsigned long int n)
{
	int position_of_bit, leading_0s;
	unsigned long int copy;

	if (n == 0)
	{
		printf("0");
		return ;
	}

	position_of_bit = sizeof(n) * 8 - 1;
	leading_0s = 1;

	while (position_of_bit >= 0)
	{
		copy = 1UL << position_of_bit;
	if (n & copy)
	{
		leading_0s = 0;
		printf("1");
	}
	else if (!leading_0s)
	{
		printf("0");
	}
	position_of_bit--;
	}
}
