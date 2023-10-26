#include "main.h"
/**
 * print_binary - function that prints the binary equivalent of decimal number
 * @n: number to convert to binary
 */
void print_binary(unsigned long int n)
{
	int j;
	unsigned long int present, count = 0;

	for (j = 63; j >= 0; j--)
	{
		present = n >> j;
		if (present & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
