#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *c = h;
	size_t count;

	count = 0;
	while (c != NULL)
	{
		printf("%d\n", c->n);
		count += 1;
		c = c->next;
	}
	return (count);
}
