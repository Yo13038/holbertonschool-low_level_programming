#include "main.h"
/**
 * print_diagsums - print diagonals values
 * @a:values to check on
 * @size: matrix size
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_D1 = 0;
	int sum_D2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_D1 += a[i * (size + 1)];
		sum_D2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum_D1, sum_D2);
}
