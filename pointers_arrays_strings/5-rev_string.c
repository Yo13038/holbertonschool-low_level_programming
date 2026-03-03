
#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 *
 * Return: Nothing.
 */
void rev_string(char *s)
{
	int i;
	int len = 0;
	char temp;

	/* size of the string*/
	while (s[len] != '\0')
	{
		len++;
	}

	/* swap characters by the center len / 2 */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
