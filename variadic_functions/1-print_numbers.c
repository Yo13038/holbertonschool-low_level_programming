#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - display all num.
 * @separator: chain between num.
 * @n: num inside the fuction.
 * @...: num to display.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && i < n -  1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);

}
