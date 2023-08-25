#include "main.h"

/**
 * leet - Replaces a bunch of numbers with letters
 * @z: Pointer pointed at a string
 * Return: the new string
 */
char *leet(char *z)
{
	char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char sub[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; z[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (z[i] == arr[j])
				z[i] = sub[j / 2];
		}
	}
	return (z);
}
