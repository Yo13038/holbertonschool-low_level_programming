#include "main.h"
/**
 * 
 *print - all digit exept 2 and 4
 * 
 *Return Nothing
 */
void print_most_numbers(void)
{

	int n;
	
	for (n = 0; n <= 9; n++)
	{
		if (n !=2 && n !=4)
		{
			
			_putchar(n + '0');
		}	
	}	
	_putchar('\n');
}
