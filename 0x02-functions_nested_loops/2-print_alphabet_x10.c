#include "main.h"

/**
 * prints lowercase alphabet on 10 different lines
 * Return:0
 */

void print_alphabet_x10(void)
{
	int count = '0';

	char letter = 'a';

	while (count <= 10)
	{
		while(letter = 'z')
		{
			_putchar(letter);
			letter++;
		
		}
	
		_putchar('\n');
	}

}
