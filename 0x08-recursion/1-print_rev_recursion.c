#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reverse.
 * @x: string
 * Return:no return.
 */


void _print_rev_recursion(char *x)
{
	if (*x != '\0')
	{
		_print_rev_recursion(x + 1)
		_putchar(*x)
	}
}

