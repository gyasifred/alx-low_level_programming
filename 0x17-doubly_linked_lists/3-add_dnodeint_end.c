#include "lists.h"

/**
  * add_dnodeint_end - Adds a new node at the end of a doubly linked list
  * @head: The head of the doubly linked list
  * @n: The number to place in the new node
  *
  * Return: The new head of the doubly linked list
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current =  current->next;
		}
		current->next = newNode;
		newNode->prev = current;
	}
	return (newNode);
}
