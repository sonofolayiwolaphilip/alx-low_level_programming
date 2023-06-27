#include "main.h"
/**
* _strlen -  returns the length of a string.
* @str: The String to get the length of
*
* return : The length of @str.
**/
size_t _strlen(char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
