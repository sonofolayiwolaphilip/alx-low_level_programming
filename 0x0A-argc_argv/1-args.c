#include <stdio.h>
/**
 * main - to print number of arguments
 * argc: counter
 * argv: variables
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
