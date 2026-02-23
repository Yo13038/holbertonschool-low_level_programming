#include <stdio.h>
/**
 * main - Enter point
 *
 * Descriptif: show the alphabet in lowercase letter using putchar.
 * Return: Toujours 0 (Succes)
 */
int main(void)
{
	char lettre;

	/* Première utilisation de putchar dans une boucle */
	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		putchar(lettre);
	}

	putchar('\n');

	return (0);
}
