#include "lists.h"

/**
  *free_listint2 - free memory allocated for integer list
  *@head: pointer location of list or memory address
  *Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp, *next;

	if (head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
