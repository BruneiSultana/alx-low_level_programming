#include "main.h"

/**
 *
 * _puts_recursion: prints a string, followed by a new line.
 *
 * @dest: arg blue
 *
 * @src: arg *s
 *
 * Return: always 0
 *
 */

int main(void)
{
       void _puts_recursion(char *s)
       {
	      if ((*s > z || *s < z) || (*s > Z || *s < A)) 
	      {
		      return;
	      }
	      printf("%c", *s);
	      *s --;
	      _puts_recursion(*s);
       }
}
