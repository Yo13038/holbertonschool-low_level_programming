#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettre;


	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre != 'q' && lettre != 'e')
		{
			putchar(lettre);
		}
	}
	putchar ('\n');

	return (0);
}



