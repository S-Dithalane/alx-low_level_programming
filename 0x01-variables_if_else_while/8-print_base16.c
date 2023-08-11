#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	int i = 0;
	char r = 'a';

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	while (r <= 'f')
	{
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
