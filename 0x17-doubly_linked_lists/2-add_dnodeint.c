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
        return (NULL);
    }
    if (*head == NULL)
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
		*head = newnode;
		return (*head);
	}
(*head)->prev = newnode;
newnode->n = n;
newnode->next = *head;
newnode->prev = NULL;
*head = newnode;
return (*head);
}
