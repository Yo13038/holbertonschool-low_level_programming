#include "main.h"
/**
 * helper - cherche la racine carrée de manière itérative/récursive
 * @i: le nombre testé actuellement
 * @n: le nombre cible
 * Return: la racine ou -1
 */
int helper(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	else
		return (helper(i + 1, n));
}
/**
 * _sqrt_recursion - renvoie la racine carrée naturelle d'un nombre
 * @n: le nombre cible
 * Return: la racine ou -1
 */
int _sqrt_recursion(int n)
{
	if (n < -0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (helper(2, n));
}
