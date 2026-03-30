#include "lists.h"
/**
 * print_dlistint - count the number of node and print their values
 *@h: pointer to the head of the chain
 *
 * Return: the count of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
