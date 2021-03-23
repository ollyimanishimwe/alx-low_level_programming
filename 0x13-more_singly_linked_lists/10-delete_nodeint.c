#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the linked list
 * @index: index to delete
 * Return: 1 if succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *rmovenode;
	unsigned int i;

	i = 0;
	temp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
	}
	else
	{
		while (i < index - 1)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		rmovenode = temp;
		rmovenode = rmovenode->next;
		temp->next = rmovenode->next;
		free(rmovenode);
	}
	return (1);
}
