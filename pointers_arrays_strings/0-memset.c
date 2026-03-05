#include "main.h"
/**
 * _memset - fill the memory
 * @s: memory aera to fill
 * @b: bytes to use
 * @n: bytes to fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
