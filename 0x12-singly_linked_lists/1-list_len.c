#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	const list_t *pres;
	size_t n;

	n = 0;
	pres = h;

	while (pres != NULL)
	{
		pres = pres->next;
		n++;
	}

	return (n);
}
