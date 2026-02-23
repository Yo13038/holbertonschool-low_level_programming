#include <stdio.h>
/*
* main - enter point
* Write a program that prints the alphabet in lowercase exept for q and e.
* Return: 0 (Succes)
*/
int main(void)
{
	char lettre;


	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre != 'q' && lettre != 'e')
		{
			putchar(lettre);
		}
	}
	putchar ('\n');

	return (0);
}



