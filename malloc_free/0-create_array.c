#include "main.h"
#include <stdlib.h>
/**
 * create_array - create the array
 * @size: size of the array
 * @c: argument in the array
 *
 * Return: str (Succes) NULL (fail)
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
