#include "lists.h"

/**
  *delete_nodeint_at_index - function that deletes the node at index
  *@head: pointer to the head of the list
  *@index: index position of integer to delete
  *Return: new node (list)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *newnode, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	newnode = *head;
	temp = (*head)->next;
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		newnode = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	newnode->next = temp->next;
	free(temp);
	return (1);
}
