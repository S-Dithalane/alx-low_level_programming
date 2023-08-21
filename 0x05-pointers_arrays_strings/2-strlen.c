#include "main.h"

/**
 * _strlen - Counts the length of the string
 * @s:Pointer to the string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
