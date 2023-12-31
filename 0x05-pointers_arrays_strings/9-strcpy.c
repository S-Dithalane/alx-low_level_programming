#include "main.h"

/**
 * _strcpy - Copies a strings
 * @src: A pointer that points to a string
 * @dest: A pointer that points to a string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
