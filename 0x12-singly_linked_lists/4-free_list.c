#include "lists.h"

/**
 * free_list - free single list link objective
 *
 * @head: first node of the list
 *
 * Return: this returns nothing
*/
void free_list(list_t *head)
{
	list_t *current;


	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
