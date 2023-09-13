#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - function that selects the correct function
 * @s: operator passed as argument to the program
 * Return: the appropriate values
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return(ops[i].f);
		}
	}
	return (NULL);
}
