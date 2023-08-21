#include "main.h"

/**
 * print_rev - Prints the string in reverse order
 * @s: Pointer that points to the string
 * Followed by a new line to stdout
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	int i = count - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

