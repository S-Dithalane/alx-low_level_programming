#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @z: Parameter to be checked
 * Return: uppercase letters
 */
char *string_toupper(char *z)
{
	int i;

	for (i = 0; z[i] != '\0'; i++)
	{
		if (z[i] >= 97 && z[i] <= 122)
			z[i] -= 32;
	}

	return (z);
}
