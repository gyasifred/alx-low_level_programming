#include "lists.h"

/**
  *get_nodeint_at_index - returns the nth node of a listint_t linked list
  *@head: head of the node
  *@index: index of  the node to return
  *Return: pointer to nth node or null if it fails
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	temp = head;
	i = 0;
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (i != index || temp == NULL)
		return (NULL);
	return (temp);
}
