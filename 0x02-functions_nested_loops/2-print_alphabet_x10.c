#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets 10 times
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char i = 'a';
	int r = 0;

	for (; r < 10; r++)
	{
		for (; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
