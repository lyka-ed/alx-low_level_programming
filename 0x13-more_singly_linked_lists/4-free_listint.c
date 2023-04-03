#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Function that frees a listint_t list
 * @head: pointer used to access the address of linked list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
