#include "main.h"
/**
 * reverse_array - Reverses the array
 * @a:  Array to reverse.
 * @n: The number of elements.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n / 2)/*find the middle point for reverse*/
	{
		temp = a[i];
		a[i] = a[n - 1 - i];/*flip the array */
		a[n - 1 - i] = temp;

		i++;
	}
}
