#include "lists.h"

/**
  *print_listint - print element of an integer list
  *@h: list of integers
  *Return: length of the list
  */
size_t print_listint(const listint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
