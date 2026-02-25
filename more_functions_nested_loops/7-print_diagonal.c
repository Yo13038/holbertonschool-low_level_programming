#include "main.h"

/**
 * print_diagonal - draws a diagonal
 *
 * Return: (nothing)
 */
void print_diagonal(int n)
{
	int line, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
