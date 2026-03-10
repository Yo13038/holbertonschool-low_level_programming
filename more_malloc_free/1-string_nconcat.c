#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: n bytes of s2 to concatenate.
 *
 * Return: ptr newly allocated space in memory,
 * or NULL if the function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len_s1 = 0, len_s2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len_s1])
	{
		len_s1++;
	}
		while (s2[len_s2])
	{
		len_s2++;

	}
	if (n >= len_s2)
		n = len_s2;

	ptr = malloc(sizeof(char) * (len_s1 + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';

	return (ptr);
}
