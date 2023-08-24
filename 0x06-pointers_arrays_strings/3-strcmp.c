#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String to be compared to s2
 * @s2: String to be compared to s1
 */
int _strcmp(char *s1, char s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		*s1++;
		*s2++;
	}
}
