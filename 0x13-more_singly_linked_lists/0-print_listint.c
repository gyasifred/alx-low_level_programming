#include "lists.h"

/**
  *print_listint - print element of a list
  *@h: list of integers
  *Return: length of the list
  */
size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
