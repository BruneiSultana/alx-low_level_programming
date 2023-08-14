#include <stdio.h>

/**
 *main - print a num pair from 00-99 but no repeats (00 01, 00 02, 00 03,...)
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ts;
	int os;
	int t;
	int o;

	for (ts = '0'; ts <= '9'; ts++) /*print first two digit combo*/
	{
		for (os = '0'; os <= '9'; os++)
		{
			for (t = ts; t <= '9'; t++) /*print second of pair*/
			{
				for (o = os + 1; o <= '9'; o++)
				{
					putchar(ts);
					putchar(os);
					putchar(' ');
					putchar(t);
					putchar(o);

					if (!((ts == '9' && os == '8') &&
					      (t == '9' && o == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
