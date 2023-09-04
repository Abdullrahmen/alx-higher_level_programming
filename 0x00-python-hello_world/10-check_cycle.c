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
	listint_t *slow, *fast;
	if (!list || !list->next)
		return (0);
	if (list->next == list)
		return (1);

	slow = list;
	fast = list->next;
	while (fast && slow && fast->next)
	{
		if (slow == fast)
		{
			return (1);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}

