#include "main.h"

/**
 * _memset - Fills memory with a constant byte.
 * @s: source string
 * @b: the contant byte
 * @n: lenght of buffer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
