#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @x: string
 * Return: no return.
 */

void _puts_recursion(char *x)
{
	if (*x == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*x);
		_puts_recursion(x + 1);
	}
}
