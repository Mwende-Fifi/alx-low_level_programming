#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: the linked list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
