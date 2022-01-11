#include "sort.h"

/**
 * insertion_sort_list - function to sort a doubly linked list
 *		using insertion sort
 * @list: reference to head
 *
 * Return: void
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL;
	listint_t *tmp = NULL;

	if (!list || !(*list) || !((*list)->next))
		return;

	current = (*list)->next;

	while (current)
	{
		while (current->prev && (current)->n < (current->prev)->n)
		{
			tmp = current->prev;

			if (tmp->prev)
				(tmp->prev)->next = current;
			else
				*list = current;

			current->prev = tmp->prev;

			if (current->next)
				(current->next)->prev = tmp;

			tmp->next = current->next;
			tmp->prev = current;
			current->next = tmp;

			print_list(*list);
		}
		current = current->next;
	}
}
