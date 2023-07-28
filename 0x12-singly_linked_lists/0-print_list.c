#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * 
* prints all the elements of a list_t list.
* print_list prints nodes on all elements

*/
size_t print_list(const list_t *h)
{
	int list_count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		printf("[%d] %s\n", h->len, h->str);
		list_count++;
		h = h->next;
	}
	return (list_count);
}
