#include "lists.h"
/**
 * print_dlistint - prints all elements of dlistint
 * @h: pointer to first node of list
 * Return: num of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
    struct dlistint_t *current = h;  
    if(h == NULL) {  
        return;  
    }   
    while(current != NULL) {  
        printf("%d ", current->n);  
        current = current->next;  
    } 
}
