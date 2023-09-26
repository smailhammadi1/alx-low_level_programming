#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
int i;
int sum_diag1 = 0; // Sum of the main diagonal
int sum_diag2 = 0; // Sum of the secondary diagonal

for (i = 0; i < size; i++)
{
sum_diag1 += a[i * size + i]; // Sum of the main diagonal elements
sum_diag2 += a[i * size + (size - 1 - i)]; // Sum of the secondary diagonal elements
}

printf("%d, %d\n", sum_diag1, sum_diag2);
}
