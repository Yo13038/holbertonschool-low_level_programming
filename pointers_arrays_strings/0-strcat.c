#include "main.h"
/**
*_strcat - concatenate 2 string
*@src: source string
*@dest: destination string
*Return: dest
*/
char *_strcat(char *dest, char *src)
{

	int i = 0;
	int j = 0;

	while (dest[i] != '\0')/*size of the string*/
	{
		i++;
	}
	while (src[j] != '\0')/* append src to dest*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';/*add the final null bite*/
	return (dest);
}
