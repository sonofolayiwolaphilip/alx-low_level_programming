#include "main.h"
/**
* swap_int - swap the value of two
* @a: the first integer to swap
* @b: the second integer to swap
**/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
