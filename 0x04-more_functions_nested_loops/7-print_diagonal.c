#include "main.h"

/**
 * print_diagonal - A function that prints a diagonal line
 * @n: Number of times the character should be printed
 */
void print_diagonal(int n)
{
	int s;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
		{
			int a;

			for (a = 0; a < s; a++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
