#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the list_t list
 * @str: String to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str)
	{
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		while (str[length])
			length++;
		new->len = length;
	}

	new->next = *head;
	*head = new;

	return (new);
}
