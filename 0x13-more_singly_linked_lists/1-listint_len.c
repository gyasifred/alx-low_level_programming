#include "lists.h"

/**
  *listint_len - length of an integer list
  *@h: list of integers
  *Return: length
  */
size_t listint_len(const listint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
