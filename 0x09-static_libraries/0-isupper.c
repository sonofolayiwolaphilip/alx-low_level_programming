#include "main.h"


/**
* _isupper - upper letters
* @ch: char to evaluate
* Return: 0 if it fails or 1 for success
*/

int _isupper(int ch)

{

	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
