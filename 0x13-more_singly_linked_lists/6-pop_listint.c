#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Function that deletes the head node of a listint_t list.
 * @head: pointer used to access the address of listint_t linked list
 *
 * Return: Nothing (0)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int del;

	if (*head == NULL)
		return (0);

	tmp = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (del);
}
