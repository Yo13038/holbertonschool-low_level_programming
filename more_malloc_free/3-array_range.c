#include "main.h"
#include "stdlib.h"
/**
 * array_range - Creates an array of integers.
 * @min: The starting value.
 * @max: The ending value.
 *
 * Return: Pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int array, i = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	array = max - min + 1;

	ptr = malloc(sizeof(int) * array);

	for (i = 0; i < array; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
