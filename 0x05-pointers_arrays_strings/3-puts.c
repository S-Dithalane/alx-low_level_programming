#include "main.h"

/**
 * _puts - Prints a string
 * @str: Pointer that points to the string
 * Followed by a new line to stdout
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
