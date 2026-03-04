#include "main.h"
/**
 * leet - change a string into numbers.
 * @str: The string to change.
 *
 * Return: str
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	/* letter turn number */
	char letters[] = "aEeot";
	char numbers[] = "43307";

	while (str[i] != '\0')
	{
		j = 0;
		/* check letter to change*/
		while (letters[j] != '\0')
		{
			if (str[i] == letters[j])
			{
				/* change letter by number */
				str[i] = numbers[j];
			}
			j++;
		}
		i++;
	}

	return (str);
}
