
#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line.
 * @s: the string to be printed.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int len = 0;

	/* size of the string*/
	while (s[len] != '\0') /*stop when reach \0*/
	{
		len++;
	}

	len--; /* Move backward */
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	_putchar('\n');
}
