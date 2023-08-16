#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet on 10 different lines
 * Return : 0
 */

void print_alphabet_x10(void)
{
	int count = '0';

	while (count < 10)
	{
		char letter = 'a';
		
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

        _putchar('\n');
	count++;
	
	}

}
