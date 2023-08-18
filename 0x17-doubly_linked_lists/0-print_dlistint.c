
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
         int count;
         count = 0;
        if(h == NULL)
                return (count);
        while (h->perv != NULL)
                  h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
                count++;
		h = h->next;
	}

	return (count);
}
