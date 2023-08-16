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
 * print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);


/**
 * print_alphabet_x10 - print lowercase alphabet ten times
 */

void print_alphabet_x10(void);

/**
 * _islower - checks for lowercase
 * @c: the character to check
 * Return: int
 */

int _islower(int c);

/**
 * _isalpha - check for any alphabet
 * @c: the character to check
 * Return: int
 */

int _isalpha(int c);

/**
 * print_sign - print signed of number, positive or negative or zero. 
 * @n: the number to check
 * Return: int
 */

int print_sign(int n);

/**
 * _abs - compute absolute value of an integer
 * 
 * Return: int
 */

int _abs(int);

/**
 * print_last_digit - prints the last digit of a number
 *
 * Return: int
 */

int print_last_digit(int);
#endif
