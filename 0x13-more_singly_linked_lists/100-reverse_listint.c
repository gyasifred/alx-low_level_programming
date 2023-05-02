#include "lists.h"

/**
  * reverse_listint - the function that reverses a listint_t
  * @head: double pointer
  *Return: a pointer to the first node of the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *cur = *head, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	while (cur != NULL)
	{
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	*head = prev;
	return (*head);
}
