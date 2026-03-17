#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct f_type - Structure mapping format character to function
 * @type: The character representing the type (c, i, f, s)
 * @f: The function pointer to the print function
 */
typedef struct f_type
{
	char *type;
	void (*f)(va_list);
} f_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
