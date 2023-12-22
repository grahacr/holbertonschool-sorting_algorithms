#include "sort.h"
/**
 * insertion_sort_list - insertion sort algorithm
 * @list: doubly linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *new = NULL;
	listint_t *temp = NULL;

	if (*list == NULL || list == NULL)
	{
		exit(EXIT_FAILURE);
	}
	new = *list;
	new = new->next;
	while (new)
	{
		while (new->prev && new->n < (new->prev)->n)
		{
			temp = new;
			if (new->next)
				(new->next)->prev = temp->prev;
			(new->prev)->next = temp->next;
			new = new->prev;
			temp->prev = new->prev;
			temp->next = new;
			if (new->prev)
				(new->prev)->next = temp;
			new->prev = temp;
			if (temp->prev == NULL)
				*list = temp;
			print_list(*list);
			new = new->prev;
		}
		new = new->next;
	}
}
