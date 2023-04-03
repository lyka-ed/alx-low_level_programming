#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - Function that returns the number of elements in a
 * linked listint_t list.
 * @h: linked list
 *
 * Return: the number of elements in lintint_t
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
