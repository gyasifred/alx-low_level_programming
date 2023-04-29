#include "lists.h"

/**
  *print_list - print element of a list
  *@h: list of strings
  *Return: length of the list
  */
size_t print_list(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		len++;
	}
	return (len);
}
