#include "lists.h"


/**
 * print_list - check the code
 * @h: name of the list
 * Return: nodes numbers.
 */

size_t print_list(const list_t *h)
{
const list_t *current = h;
while (current != NULL)
{
printf("%d ", current->data);
current = current->next;
}
printf("[0] (nil)\n");
return (0);
}
