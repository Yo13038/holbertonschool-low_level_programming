#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int num_1, num_2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[2]);

	result = num_1 * num_2;
	printf("%d\n", result);

	return (0);
}
