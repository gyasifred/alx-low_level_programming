#include "lists.h"

/**
  *free_list - free memory allocated for list
  *@head: pointer location of list or memory address
  *Return: void
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
