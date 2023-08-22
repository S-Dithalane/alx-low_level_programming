#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Points to the string
 * followed by a new line
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (int i = count - 1; i >= 0; i--;)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
