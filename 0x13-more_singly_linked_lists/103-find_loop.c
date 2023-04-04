#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - Function that finds the loop in a linked list.
 * @head: A pointer used to access the address of head of the listint_t list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *max, *mini;

	if (head == NULL || head->next == NULL)
		return (NULL);

	max = head->next;
	mini = (head->next)->next;

	while (mini)
	{
		if (max == mini)
		{
			max = head;

			while (max != mini)
			{
				max = max->next;
				mini = mini->next;
			}
			return (max);
		}
		max = max->next;
		mini = (mini->next)->next;
	}
	return (NULL);
}
