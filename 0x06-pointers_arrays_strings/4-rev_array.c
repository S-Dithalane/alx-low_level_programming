#include "main.h"

/**
 * reverse_array - Reverse the elements in the array
 * @n: Number of elements in the array
 * @a: A pointer to the integers
 * Return: 0 Success
 */
void reverse_array(int *a, int n)
{
	int i = n - 1;
	int j;
	int temp;

	for (i = 0; i < j; i++)
	{
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		i--;
	}
}
