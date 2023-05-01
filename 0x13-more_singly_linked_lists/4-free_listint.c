#include "lists.h"

/**
  *free_listint - free memory allocated for integer list
  *@head: pointer location of list or memory address
  *Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
