#include "lists.h"

/**
  *dlistint_len - Print the length of a list
  *@h: head of the list
  *Return: count - length of the list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		++count;
		h = h->next;
	}
	return (count);
}
