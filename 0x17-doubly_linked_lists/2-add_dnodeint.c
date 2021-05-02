#include "lists.h"
/**
 * add_dnodeint - prints all elements of dlistint
 * @n: new element
 * @head: head pointer
 * Return: num of elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
struct dlistint_t * newnode;
    if(dlistint_t == NULL)
    {
        return (null);
    }
    else
    {
        newnode = (struct dlistint_t *)malloc(sizeof(struct dlistint_t));
        newnode->num = num;
        newnode->prev = dlistint_t;
        newnode->next = NULL;
        dlistint_t->prev = newnode;
        dlistint_t = newnode;
        return (newnode);
    }
}
