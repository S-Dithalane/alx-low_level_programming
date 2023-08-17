#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: Number of times the character should be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
