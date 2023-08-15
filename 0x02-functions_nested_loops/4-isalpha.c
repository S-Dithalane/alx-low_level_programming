#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Parameter to be checked
 * Return: 1 if c is a letter, lowercase, uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
