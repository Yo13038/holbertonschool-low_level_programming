#include "main.h"
/**
 * cap_string - Change the letter to uppercase.
 * @str: string modified.
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char sep[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		/* Check the first character of string */
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}

		/* check sep array */
		for (j = 0; sep[j] != '\0'; j++)
		{
			/* check if is character is separator */
			if (str[i - 1] == sep[j])
			{
				/* check if character is lowercase */
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}

	return (str);
}
