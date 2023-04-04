#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Function that counts the number of unique nodes
 * in a listint_t linked list.
 * @head: A pointer that is used to access the head of the listint_t to check.
 *
 * Return: If the list is not looped -0 or number of nodes.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *max, *mini;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	max = head->next;
	mini = (head->next)->next;

	while (mini)
	{
		if (max == mini)
		{
			max = head;
			while (max != mini)
			{
				nodes++;
				max = mini->next;
				mini = mini->next;
			}

			max = max->next;
			while (max != mini)
			{
				nodes++;
				max = max->next;
			}
			return (nodes);
		}

		max = max->next;
		mini = (mini->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Function that prints a listint_t linked list.
 * @head: A pointer used to access the  addresss of head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
