#include "lists.h"

/**
 * print_list - prints all the elements of a singly linked list
 * @h: head a the list
 *
 * Return: the total number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
