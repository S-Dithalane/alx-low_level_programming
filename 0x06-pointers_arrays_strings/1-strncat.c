#include "main.h"

/**
 * *strncat - Concatenate two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Limit of eliteration
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[len_dest + i] =src[i];
	}
	dest[len_dest + i] = '\0';

	return (dest);
}
