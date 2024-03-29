#include "main.h"

/**
 * _puts_recursion - recursively prints a string, followed by a new line
 * @s: the strings to be printed
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
