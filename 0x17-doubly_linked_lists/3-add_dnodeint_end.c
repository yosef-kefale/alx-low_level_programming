#include "lists.h"
/**
 * add_dnodeint_end - add node to the end of list
 * @head: pointer to first node
 * @n: data inside node
 * Return: pointer to first node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
		new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
  while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	tmp->next = new;
	new->prev = tmp;
	new->next = NULL;
	return (new);
}
