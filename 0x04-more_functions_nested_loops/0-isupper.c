#include "main.h"

/**
 * _isupper - The fuction that checks for uppercase
 * @c: Character yo be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
