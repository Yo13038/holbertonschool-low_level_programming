#include<stdio.h>
/**
*
* main - prints all the numbers of base 16 in lowercase
*
* Return: 0 (Succes)
*/
int main(void)
{
	int number;
	char letter;

	for (number = 1; number < 10; number ++)
	{
		putchar(number + '0');
	}
	for (letter = 'a'; letter < 'g'; letter ++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
