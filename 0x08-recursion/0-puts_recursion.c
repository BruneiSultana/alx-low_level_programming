#include "main.h"

/**
 * main - dereferencing pointers, example with int and char types
 *
 * _puts_recursion - recursively prints a string, followed by a new line
 * @s - the strings to be printed
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1)
	}
	printf('\n');
}
