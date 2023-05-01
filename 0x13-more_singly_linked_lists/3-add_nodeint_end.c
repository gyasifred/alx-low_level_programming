#include "lists.h"

/**
  *add_nodeint_end - add element to the end of an integer list
  *@head: first element of the list
  *@n: integer to add
  *Return: new integer list
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newint;
	listint_t *temp;

	newint  = malloc(sizeof(listint_t));
	if (newint == NULL)
		return (NULL);
	newint->n = n;
	newint->next = NULL;
	if (*head == NULL)
	{
		*head = newint;
		return (newint);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newint;
	return (newint);
}
