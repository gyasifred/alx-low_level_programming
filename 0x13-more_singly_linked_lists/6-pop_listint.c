#include "lists.h"

/**
  *pop_listint - function to delete the head node of a linkedlist
  *@head: head of the linked list
  *Return: list
  *
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	temp = *head;
	if (head == NULL || *head == NULL)
		return (n);
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
