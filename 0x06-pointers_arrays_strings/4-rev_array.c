#include "main.h"

/**
 * reverse_array - Reverse the elements in the array
 * @n: Number of elements in the array
 * @a: A pointer to the integers
 * Return: 0 Success
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i;
	int j = n - 1;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}


}
