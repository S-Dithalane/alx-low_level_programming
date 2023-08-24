#include "main.h"

/**
 * _strncpy - Copy a string
 * @dest: String destination
 * @src: The string to be copied
 * @n: The parameter to be checked
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
