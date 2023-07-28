#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the number of nodes.
 * @h: name of the list
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
    size_t x_nodes = 0;

    while (h != NULL)
    {
        h = h->next;
        x_nodes++;
    }
    return x_nodes;
}
