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
		tmo = tmp->next;
		i++;
	}

	tmp->next = new_node;
	new_node->prev = tmp;
	new_node->next = NULL;
	return (new_node);
}
