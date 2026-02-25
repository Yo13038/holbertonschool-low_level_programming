#include "main.h"
/**
 * 
 * main - check for uppercase caharacter
 * 
 * Return: 1 (Succes)
 * Return: 0 (Not succes)
 */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
} 