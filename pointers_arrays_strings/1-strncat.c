#include "main.h"
/**
 * _strncat - conctenate 2 string
 * @src: source string to copy
 * @dest: destination where
 * @n: num of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')/*size of dest*/
	{
		i++;
	}

	while (j < n && src[j] != '\0')/*copy n octet from src to dest*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
