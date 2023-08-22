#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: A pointer that points to the string
 */
void rev_string(char *s)
{
	int a, b, c;
	char d;

	b = 0;
	c = 0;

	while (s[b] != '\0')
	{
		b++;
	}

	c = b - 1;

	for (a = 0; a < b / 2; a++)
	{
		tmp = s[a];
		s[a] = s[c];
		s[c--] = d;
	}
}
