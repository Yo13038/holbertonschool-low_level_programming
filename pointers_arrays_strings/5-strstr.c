#include "main.h"
/**
 * _strstr - the subchain.
 * @haystack: where to search
 * @needle: subchain to found.
 *
 * Return: haystack NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	/* return to haystack if not needle*/
	if (*needle == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		j = 0;
		/* if first character found, continue*/
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}

	return (NULL);
}
