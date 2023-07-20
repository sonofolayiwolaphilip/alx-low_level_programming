#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * adds_positive - function to add positive numbers
 * @argc: counter of the number
 * @argv: array containing the numbers
 *
 * return: sum of positive numbers 
 */
int adds_positive(int argc, char *argv[])
{
	int sum=0;

	for (int i =1; 1<argc; i++)
	{
		if (!isdigit(*argv[i]))
		{

			printf("Error\n");
			return (1);
		}

		int num = atoi(argv[i]);
		
		if (num > 0)
		{
			sum +=num;
		}
	
	}

	return (sum);
}

/**
 * main - Entery into he function
 * @argc: counter 
 * @argv: Array
 *
 * return: 0 on success
 */

int main(int argc, char *argv[])
{
	if(argc < 2)
	{
		printf("0\n")
	}
	else if (!isdigit(argv[]))
	{
		printf("Error\n")
	}
	else
	{
		int result = adds_positive(argc, argv);
		printf("%d\n", result);
	}

	return (0);

}
