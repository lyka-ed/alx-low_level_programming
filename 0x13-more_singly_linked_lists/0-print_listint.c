#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function that prints all the elements of a listint_t list.
 * @h: It's a linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node++;
	}
	return (node);
}
