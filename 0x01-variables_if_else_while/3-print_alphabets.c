#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Success
 */
int main(void)
{
	char i = 'a';
	char r = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (r <= 'Z')
	{
		putchar(r);
		r++;
	}
	putchar('\n');
	return (0);
}
