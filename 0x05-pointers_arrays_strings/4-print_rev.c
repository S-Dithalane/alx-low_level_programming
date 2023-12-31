#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Points to the string
 * followed by a new line
 */
void print_rev(char *s)
{
	int count, i;

	count = 0;
	i = count - 1;

	while (s[count] != '\0')
	{
		count++;
	}

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
