#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String to be compared to s2
 * @s2: String to be compared to s1
 * Return: The difference in string length
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
