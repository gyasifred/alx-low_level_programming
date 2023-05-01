#include "lists.h"
/**
 * sum_listint - sum of all the element of an integer list.
 * @head: pointer to the first node
 *
 * Return: sum all of all the integers
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
