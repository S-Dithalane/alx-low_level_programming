#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: A parameter that prints half of a string
 * Followed by a new line
 */
void puts_half(char *str)
{
	int a, n, c;

	a = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 0)
	{
		for (c = a / 2; str[c] != '\0'; c++)
		{
			_putchar(str[c]);
		}
	}

	else if (a % 2)
	{
		for (n = (a - 1) / 2; n < a - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
