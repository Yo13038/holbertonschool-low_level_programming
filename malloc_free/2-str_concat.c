#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the newly allocated space, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, i = 0, j = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	concat = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < len_s2; j++)
	{
		concat[i] = s2[j];
		i++;
	}
	concat[i] = '\0';

	return (concat);
}
