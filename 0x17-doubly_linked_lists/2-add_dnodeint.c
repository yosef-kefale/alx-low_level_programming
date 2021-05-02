#include "lists.h"
/**
 * add_dnodeint - add node to the beginning of list
 * @head: pointer to first node
 * @n: data inside node
 * Return: pointer to first node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t * newnode;
newnode =malloc(sizeof(dlistint_t));
    if(newnode == NULL)
    {
        return (null);
    }
    if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
    else
    {
  (*head)->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
    }
}
