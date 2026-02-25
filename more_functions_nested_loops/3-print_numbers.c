#include "main.h"
/**
 *print N - print all digit 
 * 
 * Return Noting
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
			_putchar(n + '0');
	}
	_putchar ("\n");
}
