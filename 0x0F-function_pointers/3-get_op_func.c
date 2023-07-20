#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects the correct function to perform
 * @s: The operator passed as an argument to the program.
 *
 * Return: A pointer to the function that corresponds
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", add},
		{"-", subtract},
		{"*", multiply},
		{"/", divide},
		{"%", modulo},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
