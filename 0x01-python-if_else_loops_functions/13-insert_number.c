#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* insert_node - insert node to a sorted linked list
* @head: head of the linked list
* @number: the value of the inserted value
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *iter = NULL, *prev = NULL, *new = NULL;

	if (!head)
		return (NULL);
	if (!*head || number < head[0]->n)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = number;
		new->next = *head;
		*head = new;
		return (new);
	}
	prev = *head;
	iter = prev->next;
	while (iter)
	{
		if (number < iter->n)
		{
			new = malloc(sizeof(listint_t));
			if (!new)
				return (NULL);
			new->n = number;
			new->next = iter;
			prev->next = new;
			return (new);
		}
		prev = iter;
		iter = iter->next;
	}
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = number;
	new->next = NULL;
	prev->next = new;
	return (new);
}

