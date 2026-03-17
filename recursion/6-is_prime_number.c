#include "main.h"
/**
 * check_prime - vérifie récursivement les diviseurs de n
 * @n: le nombre à tester
 * @i: le diviseur actuel à tester
 * Return: 1 si premier, 0 sinon
 */
int check_prime(int n, int i)
{
    if (i == n)
        return (1);

    if (n % i == 0)
        return (0);

    return (check_prime(n, i + 1));
}

/**
 * is_prime_number - détermine si un entier est premier
 * @n: le nombre à tester
 * Return: 1 si premier, 0 sinon
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);

    return (check_prime(n, 2));
}