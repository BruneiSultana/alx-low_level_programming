#include "main.h"

/**
 * _isdigit - checks for digits
 *
 * @c: input argument
 * Return: 1 if the character is uppercase, 0 if lowercase
 *
 */

int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
