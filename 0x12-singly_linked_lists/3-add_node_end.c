#include "lists.h"

/**
  *add_node_end - add element to the end of a list
  *@head: first element of the list
  *@str: string to be added
  *Return: new list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	if (str == NULL)
		return (NULL);
	new  = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
