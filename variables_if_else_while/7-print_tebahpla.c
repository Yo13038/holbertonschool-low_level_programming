#include<stdio.h>
/*
*
* main - enter point
*Descriptif: Write a program that prints the lowercase alphabet in reverse.
*Return: 0 (Succes)
*/
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}


