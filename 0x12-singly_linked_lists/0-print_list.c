#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - check the code
 * @h: name of the list
 * Return: nodes numbers.
 */

size_t print_list(const list_t *h)
{
	int count_list = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		count_list++;
		h = h->next;
	}
	return (count_list);
}
