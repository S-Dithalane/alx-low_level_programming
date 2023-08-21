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

	for (int i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

