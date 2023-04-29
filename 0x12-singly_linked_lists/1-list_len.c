#include "lists.h"

/**
  *list_len - length of a list
  *@h: list
  *Return: length
  */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
