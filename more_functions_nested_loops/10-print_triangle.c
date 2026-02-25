#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int line, space, hashtag;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 1; line <= size; line++)
		{
			for (space = 0; space < (size - line); space++)
			{
				_putchar(' ');
			}

			for (hashtag = 0; hashtag < row; hashtag++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
