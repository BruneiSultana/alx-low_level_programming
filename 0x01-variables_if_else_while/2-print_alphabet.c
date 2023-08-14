#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';

	if (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	else
	{
		putchar('\n');
	}
	return (0);
}
