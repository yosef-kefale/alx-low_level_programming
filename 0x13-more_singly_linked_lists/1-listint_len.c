#include "lists.h"
/**
* listint_len - prints n count n list
* @h: pointer to first
*Return: pointer
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
}
