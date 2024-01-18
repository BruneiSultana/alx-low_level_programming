#include "main.h"

/**
 * main - dereferencing pointers, example with int and char types
 *
 * _puts_recursion - recursively prints a string, followed by a new line
 *
 * Return: always 0.
 *
 */

int main(void)
{
	void _puts_recursion(char *s)
	{
		if (*s == '\0')
		{
			putchar('\n');
		}
	      putchar(*s);
	      *s++;
	      _puts_recursion(*s);
	}
}
