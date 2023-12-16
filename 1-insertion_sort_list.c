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
		return;
	}
	new = *list;
	new = new->next;
	while (new)
	{
		while (new->n < (new->prev)->n)
		{
			temp = new;
			if (new->next)
				(new->next)->prev = temp->prev;
			(new->prev)->next = 
			new->prev = temp->prev;
			temp->next = new->next;
			if (temp->prev != NULL)
				temp->prev->next = new;
		
				*list = new;
				new->next = temp;
				temp->prev = new;
				print_list(*list);
				new = *list;
			}
			else
			{
				new = new->next;
			}
		}
	}
}
