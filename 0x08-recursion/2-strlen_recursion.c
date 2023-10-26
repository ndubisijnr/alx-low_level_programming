#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @x: string
 * Return:no return.
 */

int _strlen_recursion(char *x)
{
	if (*x != '\0')
	{
		return (1 + _strlen_recursion(x + 1));
	}
	else{
		(return 0);
	}
}


