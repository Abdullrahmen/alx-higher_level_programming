#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* check_cycle - checks if a singly linked list has a cycle in it
* @list: the linked list
* Return: 0 if there is no cycle, 1 if there is a cycle
*/
int check_cycle(listint_t *list)
{
	listint_t *outer_iter = NULL, *inner_iter = NULL;

	if (!list || !list->next)
		return (0);
	if (list->next == list)
		return (1);

	outer_iter = list;
	while (outer_iter->next)
	{
		outer_iter = outer_iter->next;
		inner_iter = list;
		while (inner_iter != outer_iter)
		{
			if (outer_iter->next == inner_iter)
				return (1);
			inner_iter = inner_iter->next;
		}
	}
	return (0);
}

