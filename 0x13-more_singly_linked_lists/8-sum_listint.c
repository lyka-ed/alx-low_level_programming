#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - Function  that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: A pointer used to access the address of the listint_t lis
 *
 * Return: If the list is empty - 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
