#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: input argument
 * Return: 1 if the character is uppercase, 0 if lowercase
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
