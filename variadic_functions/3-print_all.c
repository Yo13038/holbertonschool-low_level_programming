#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_char - Prints a char from va_list
 * @arg: va_list containing the char
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - Prints an integer from va_list
 * @arg: va_list containing the integer
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - Prints a float from va_list
 * @arg: va_list containing the float
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_str - Prints a string from va_list
 * @arg: va_list containing the string
 */
void print_str(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - Prints anything based on a format string
 * @format: A list of types of arguments passed to the function
 * @...: The arguments to be printed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j;
	char *separator = "";
	f_type types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j].type)
		{
			if (format[i] == types[j].type[0])
			{
				printf("%s", separator);
				types[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
