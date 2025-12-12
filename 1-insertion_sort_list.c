#include "sort.h"

/**
 * insertion_sort_list - This is the function for the function
 * @list: This is the pointer
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *comp, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	cur = (*list)->next;

	while (cur)
	{
		temp = cur->next;
		comp = cur->prev;

		while (comp && cur->n < comp->n)
		{
			comp->next = cur->next;
			if (cur->next)
				cur->next->prev = comp;

			cur->prev = comp->prev;
			cur->next = comp;

			if (comp->prev)
				comp->prev->next = cur;
			comp->prev = cur;

			if (cur->prev == NULL)
				*list = cur;

			print_list(*list);

			comp = cur->prev;
		}

		cur = temp;
	}
}
