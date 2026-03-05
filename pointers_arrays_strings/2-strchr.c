#include "main.h"
/**
 * _strchr - search the character.
 * @s: string to check.
 * @c: character to find.
 *
 * Return: s or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	/* check the array, nul byte included*/
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		/*stop if reach the null byte*/
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}

	return (NULL);
}
