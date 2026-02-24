#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 (Succes)
 */
void print_alphabet(void)
{
  	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		_putchar(lettre);
	}
    _putchar('\n');
    
}