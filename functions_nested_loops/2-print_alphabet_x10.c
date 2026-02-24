#include "main.h"
/**
 * main - Enter point
 *
 * Descriptif: show the alphabet in lowercase letter using putchar.
 * Return: Toujours 0 (Succes)
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
