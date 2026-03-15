#include "3-calc.h"

/**
 * print_number - prints an integer using _putchar
 * @n: number to print
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		_putchar('E'), _putchar('r'), _putchar('r'), _putchar('o'), _putchar('r'), _putchar('\n');
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		_putchar('E'), _putchar('r'), _putchar('r'), _putchar('o'), _putchar('r'), _putchar('\n');
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		_putchar('E'), _putchar('r'), _putchar('r'), _putchar('o'), _putchar('r'), _putchar('\n');
		exit(100);
	}

	result = f(a, b);
	print_number(result);
	_putchar('\n');

	return (0);
}
