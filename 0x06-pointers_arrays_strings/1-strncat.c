#include "main.h"

/**
 * _strncat - Concatenate two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Limit of eliteration
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest;
	int len_src;
	int i;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	while (src[len_src] != '\0')
	{
		len_src++;
	}

	for (i = 0; i < n; i++)
	{
		dest[len_dest] = src[i];
		len_dest++;
	}
	return (dest);
}
