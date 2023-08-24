#include "main.h"

/**
 * _strcat - It concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len_dest;

	len_dest = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
