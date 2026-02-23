#include <stdio.h>
/* main - enter point
* Write a program that prints the alphabet in lowercase exept for q and e, followed by a new line
*Return: 0 (Succes)
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
	putchar('\n');	

	return (0);
}



