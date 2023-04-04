#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - Function that reverses a listint_t linked list.
 * @head: A pointer used to access the address of the head of the
 * listint_t linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = front;
	}

	(*head)->next = behind;

	return (*head);
}
