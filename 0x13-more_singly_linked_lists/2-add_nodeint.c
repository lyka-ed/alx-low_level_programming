#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Functions that adds a new node at the beginning
 * of a listint_t list.
 * @head: A pointer used to access the address of listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
