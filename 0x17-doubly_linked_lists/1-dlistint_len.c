#include "lists.h"
/**
 * print_dlistint - prints number of elements in dlistint
 * @h: pointer to first node of list
 * Return: num of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
