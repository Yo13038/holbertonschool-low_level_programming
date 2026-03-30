#include "lists.h"
/**
 * dlistint_len - function that return number of nodes
 * @h: pointer to the head of the chain
 *
 * Return: lenght of the chain
 *
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
