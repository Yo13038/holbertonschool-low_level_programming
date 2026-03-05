#include "main.h"
/**
 * _strpbrk - search for a bite in a chain.
 * @s: chain to check.
 * @accept: chain with what to search.
 * Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	/* check the chain */
	while (s[i] != '\0')
	{
		j = 0;
		/* search accept for each s */
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				/* return the adresse when found a bite */
				return (s + i);
			}
			j++;
		}
		i++;
	}

	/* not bite found */
	return (NULL);
}
