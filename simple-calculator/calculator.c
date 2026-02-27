#include <stdio.h>

/**
 * main - simple calculator
 *
 * Return: 0
 */
int main(void)
{
int choiceMenu;
int A, B;
	while (1)
	{
		printf("\n--- Simple Calculator ---\n");
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("What do you want to do ? ");
		scanf("%d", &choiceMenu);
		if (choiceMenu == 0)
		{
			printf("Bye!\n");
			break;
		}
		else if (choiceMenu > 4)
		{
			printf("Invalid choice\n");
		}
		else if (choiceMenu == 1)
		{
			printf("Choice:1\n");
			printf("A:\n");
			scanf("%d", &A);
			printf("B:\n");
			scanf("%d", &B);
			printf("Result: %d,", A + B);
		}
	}
	return (0);
}
