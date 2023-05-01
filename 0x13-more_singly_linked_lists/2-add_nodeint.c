#include "lists.h"

/**
  *add_nodeint - add new integer element to an integer list
  *@head: node
  *@n: integer to be added
  *Return: new integer list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_int;

	new_int = malloc(sizeof(listint_t));
	if (new_int == NULL)
		return (NULL);
	new_int->n = n;

	new_int->next = *head;
	*head = new_int;

	return (new_int);
}
