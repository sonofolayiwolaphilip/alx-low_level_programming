#include <stdio.h>
#include "main.h"
/**
 * main - to print self name
 * @argc: counter
 * @argv: place holder
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
