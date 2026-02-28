#include <stdio.h>
/**
 * add - adds two float
 * @A: first float
 * @B: second float
 *
 * Return: the sum of A plus B
 */
float add(float A, float B)
{
	return (A + B);
}
/**
 * substract - substract two float
 * @A: first float
 * @B: second float
 *
 * Return: the difference of A minus B
 */
float substract(float A, float B)
{
	return (A - B);
}
/**
 * multiply - multiply two float
 * @A: first float
 * @B: second float
 *
 * Return: the product of A time B
 */
float multiply(float A, float B)
{
	return (A * B);
}
/**
 * divide - divide two float
 * @A: first float
 * @B: second float
 *
 * Return: A divided by B
 */
float divide(float A, float B)
{
	return (A / B);
}
/**
 * main - simple calculator
 *
 * Return: 0
 */
int main(void)
{
int choiceMenu;
float A = 0, B = 0, result = 0;
	while (1)
	{
		printf("\n--- Simple Calculator ---\n1) Add\n2) Substract\n");
		printf("3) Multiply\n4) Divide\n0) Quit\nSelect your option please ? ");
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
		else if (choiceMenu > 0 && choiceMenu < 5)
		{
			printf("A: ");
			scanf("%f", &A);
			printf("B: ");
			scanf("%f", &B);
			if (choiceMenu == 1)
				result = add(A, B);
			else if (choiceMenu == 2)
				result = substract(A, B);
			else if (choiceMenu == 3)
				result = multiply(A, B);
			else if (choiceMenu == 4)
				result = divide(A, B);
			printf("%f", result);
		}
	}
	return (0);
}

