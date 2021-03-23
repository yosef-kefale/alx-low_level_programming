#include "lists.h"
/**
 * listint_len - count elements of listint
 * @h: pointer to first node of list
 * Return: count of elements
 */
size_t listint_len(const listint_t *h);
{
size_t count = 0;
while (h) 
{ 
h = h->next;
count++;  
} 
return (count);
}
