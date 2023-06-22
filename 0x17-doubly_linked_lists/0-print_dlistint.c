#include "lists.h"

/**
  *print_dlistint - function that prints all the elements of a dlistint_t list
  *@h: head of list
  *Return: Length of list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		len++;
		current = current->next;
	}
	return (len);
}
