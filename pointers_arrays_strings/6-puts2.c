#include "main.h"

/**
 * puts2 - prints every two character
 * start at the first character
 * @str: the string
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')/*\0 the end of the string*/
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
