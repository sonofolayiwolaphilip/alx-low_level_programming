#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - select the right function to perform operation
 * @s: The operator passed as an argument to the program
 *
 * Return: A ponter to the function that corresponds
 */
int (*get_op_func(char *s))(int, int) {
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
		if (*(ops[i].op) == *s && s[i] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
