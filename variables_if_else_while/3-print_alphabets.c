#include <stdio.h>
/**
 * main - Point d'entrée
 * Descriptif: show the alphabet in lowercase first then uppercase.
 * Return: always 0 (Succes)
 */
int main(void)
{
	char ch;

	/* lowercase */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	/* Uppercase */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	/* back to the line */
	putchar('\n');

	return (0);
}
