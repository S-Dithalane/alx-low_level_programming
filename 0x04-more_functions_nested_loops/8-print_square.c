#include "main.h"

/**
 * print_square - A function that prints squares
 * @size: Represent size of a square
 * Followed by a new line
 */
void print_square(int size)
{
	if (size > 0)
	{
		int a, b;

		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
