#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - allocated space in memory
 * @str: the string to duplicate
 *
 * Return: copy(Succes); NULL(Fail)
 */
char *_strdup(char *str)
{
	int i;
	int j = 0;
	char *copy;

	if (str == NULL)
	return (NULL);

	while (str[j] != '\0')
	{
		j++;
	}

	copy = malloc(sizeof(char) * (j + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= j ; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
