#include "main.h"

/**
 * _strcat - It concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len_dest, len_src; /* Length for dest and src */

	len_dest = 0;
	len_src = 0;
	int i;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	while (src[len_src] != '\0')
	{
		len_src++;
	}

	for (i = 0; i <= len_src; i++)
	{
		dest[len_dest] = src[i];
		len_dest++;
	}
	return (0);
}

