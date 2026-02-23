#include<stdio.h>
/**
* main - enter point
*
* Descriptif: Program who print every single digit using only putchar
* Return: 0 (Succes)
*/
int main(void)
{
	int digit;
		for (digit = 0; digit < 10; digit++)
		{
		putchar(digit + '0');
		}
	putchar('\n');

	return (0);
}
