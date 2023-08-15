#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @n: The int to extract from
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
		n = -n;

	b = n % 10;

	if (b < 0)
		b = -b;

	_putchar(b + '0');

	return (b);
}
