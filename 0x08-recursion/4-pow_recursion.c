#include "main.h"

/**
 * _pow_recursion - returns the value of x raise to power of y.
 * @x: arg1
 * @y: arg2 
 * Return: number.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
