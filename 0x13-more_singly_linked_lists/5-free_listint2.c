#include "lists.h"

/**
 * function that frees the list and sets head to NULL
 *
 * @head: pointer to the first node
 *
 * Return: None
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		current = *head;

		
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}

		*head = NULL;
	}
}
