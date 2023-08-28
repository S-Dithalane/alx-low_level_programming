#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print additions of the two diagonals.
 * @a: source matrix
 * @size: size NxN of matrix
 * Return: chessboard
 */
void print_diagsums(int *a, int size)
{
	int i, j, sumdiago1 = 0, sumdiago2 = 0, step1, step2;

	for (i = 0; i <= (size - 1); i++)
	{
		step1 =  (size + 1) * i;
		sumdiago1 = sumdiago1 + *(a + step1);
	}

	for (j = 1; j <= size; j++)
	{
		step2 = (size - 1) * j;
		sumdiago2 = sumdiago2 + *(a + step2);
	}
	printf("%d, %d\n", sumdiago1, sumdiago2);
}
