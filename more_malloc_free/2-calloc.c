#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements in the array.
 * @size: Size in bytes of each element.
 *
 * Return: ptr to the allocated memory.
 * If nmemb or size is 0, returns NULL.
 * If malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size, i;
	char *ptr;


	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;

	return (ptr);
}
