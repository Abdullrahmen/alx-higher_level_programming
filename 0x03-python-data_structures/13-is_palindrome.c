#include "lists.h"

/**
* len_list - len of the linked list
* @list: head
* Return: the length
*/
int len_list(listint_t *list)
{
	int l = 0;

	if (!list)
		return (0);
	while (list)
	{
		list = list->next;
		++l;
	}
	return (l);
}

/**
* reversed_second_half - reverse the second half of the linked list
* @head: head
* @len: len
* Return: new list contains the values of the reversed second half
*/
int **reversed_second_half(listint_t *head, int len)
{
	int **sec_half = NULL, len2 = 0, i = 0;

	if (!head)
		return (NULL);
	if (len % 2 == 0)
		len2 = len / 2;
	else
		len2 = len / 2 + 1;
	len = len / 2;
	sec_half = malloc(sizeof(int *) * (len + 1));
	sec_half[len--] = NULL;
	for (i = 0; i < len2; ++i)
		head = head->next;
	while (len)
	{
		sec_half[len] = &head->n;
		head = head->next;
		--len;
	}
	sec_half[len] = &head->n;
	return (sec_half);
}

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: double pointer to the linked list
 *
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(listint_t **head)
{
	int **sec_half, **temp, len = 0, is_pal = 1;
	listint_t *iter = NULL;

	if (!head || !*head)
		return (1);
	len = len_list(*head);
	sec_half = reversed_second_half(*head, len);
	iter = *head;
	temp = sec_half;
	while (*sec_half)
	{
		if (iter->n != **sec_half)
		{
			is_pal = 0;
			break;
		}
		++sec_half;
		iter = iter->next;
	}
	free(temp);
	return (is_pal);
}
