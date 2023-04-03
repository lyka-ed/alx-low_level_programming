#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a listint_t list.
 * @head: pointer used to access the address of listint_t list.
 * Description: The function sets the head to NULL at the end.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
