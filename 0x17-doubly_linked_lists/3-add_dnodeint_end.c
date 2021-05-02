#include "lists.h"
/**
 * add_dnodeint - add node to the beginning of list
 * @head: pointer to first node
 * @n: data inside node
 * Return: pointer to first node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
  while (head != NULL)
	{
		head = head->next;
		i++;
	}

	(*head)->next = new;
	new->n = n;
	new->next = NULL;
	new->prev =*head;
	return (*new);
}
