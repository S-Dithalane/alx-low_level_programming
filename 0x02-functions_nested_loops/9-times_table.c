#include "main.h"

/**
 * times_table - Prints 9 times table
 * Followed by a new line
 */
void times_table(void)
{
	int a, b, c;

	c = a * b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (c < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
