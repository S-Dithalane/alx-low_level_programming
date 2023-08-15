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

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
