#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - checks if a singlr-linked list contains a cycle
 * @list: A single-linked list
 *
 * Return: If there is no cycle returns 0.
 * If there is a cycle returns 1
*/
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
