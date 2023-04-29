#include "lists.h"

/**
  *add_node - add new element to a list
  *@head: node
  *@str: string to be added
  *Return: new list
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
