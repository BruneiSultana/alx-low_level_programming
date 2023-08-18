#ifndef main_h
#define main_h

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);


/**
 * _isupper - checks for uppercase character
 *
 * @c: input argument
 * Return: 1 if the character is uppercase, 0 if lowercase
 *
 */

int _isupper(int c);


/**
 * _isdigit - checks for digits
 *
 * @c: input argument
 * Return: 1 if it is a digit, 0 if not
 *
 */

int _isdigit(int c);


/**
 * mul - multiplies two numbers
 *
 * @a: first input argument
 * @b: second input argument
 * Return: 0
 *
 */

int mul(int a, int b);

/**
 * print_numbers - print digits from 0 to 9
 *
 * Return: always void
 *
 */

void print_numbers(void);


#endif
