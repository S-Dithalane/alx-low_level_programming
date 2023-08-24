#include "main.h"

/**
 * _strcat - It concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len_src;
	int len_dest;
	int i;

	len_src = 0;
	len_dest = 0;

	while (src[len_src] != '\0')
		len_src++;

	while (dest[len_dest] != '\0')
		len_dest++;

	for (i = 0; i <= len_src; i++)
	{
		dest[len_dest] = src[i];
		len_dest++;
	}
	return (dest);
}
