#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string to be treated.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i;
	int n;
	int len;

	len = 0;

	/* size of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* start */
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	/*Print from half to the end */
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
