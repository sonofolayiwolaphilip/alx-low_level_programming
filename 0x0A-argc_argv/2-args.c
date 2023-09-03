#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: counter
 * @argv: values passed
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
