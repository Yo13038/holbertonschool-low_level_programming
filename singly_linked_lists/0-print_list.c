#include <stdlib.h>
#include "lists.h"
/**
 * print_number - num with _putchar
 * @n: the num to dislpay
 */
void print_number(size_t n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the start of the list
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		_putchar('[');
		if (h->str == NULL)
		{
		_putchar('0');
		_putchar(']');
		_putchar(' ');
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		}
		else
		{
			print_number(h->len);
			_putchar(']');
			_putchar(' ');
			{
				int i = 0;

				while (h->str[i])
				{
					_putchar(h->str[i]);
					i++;
				}
			}
		}
		_putchar('\n');
		count++;
		h = h->next;
	}
	return (count);
}
