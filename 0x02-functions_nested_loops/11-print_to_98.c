#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_to_98 - Prints numbers to 98
 * @n: Number to be printed from
 * Followed by a new line
 */
void print_to_98(int n)
{
	srand(time(NULL));


	while (n <= 98)
	{
		_putchar(n);
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
		n++
	}
}
