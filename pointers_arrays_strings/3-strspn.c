#include "main.h"

/**
 * _strspn - determinate the size of s
 * @s: what to check
 * @accept: autorize character
 * Return: i (number of )
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	int found;

	/* loop s to check */
	while (s[i] != '\0')
	{
		found = 0; /* not found */
		j = 0;     /* return to the beginning of accept */

		/* search in accept if s[i] is there*/
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1; /* if found */
				break;     /* break if not found*/
			}
			j++;
		}

		/* break if not found*/
		if (found == 0)
		{
			return (i);
		}

		i++;
	}

	return (i);
}
