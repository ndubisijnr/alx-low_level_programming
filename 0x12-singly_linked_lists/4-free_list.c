#include "lists.h"

/**
 * free_list - free single list link
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_list(list_t *head)
{
list_t *temp;

while ((temp = head) != NULL)
{
temp = head->next;
free(temp->str)
free(temp);
}
}
