#include <stdio.h>
#include "main.h"

/**
 * print_arguments - prints all command-line arguments
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 */
void print_arguments(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}

/**
 * main - Entry point of the program
 * @argc: NUmber of command-line arguments
 * @argv: Array of command-line arguements
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return (0);
}
