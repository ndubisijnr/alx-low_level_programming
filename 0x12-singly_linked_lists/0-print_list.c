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
	int list_count = 0;

	do while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
        else
        {
            printf("[%d] %s\n", h->len, h->str);
        }
		list_count++;
		h = h->next;
	}
	return (list_count);
}
