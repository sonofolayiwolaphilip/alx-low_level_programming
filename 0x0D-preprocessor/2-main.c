#include <stdio.h>

/**
 * main - to prints the name of the file it was compiled from, then \n.
 *
 * Return: return (0)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
