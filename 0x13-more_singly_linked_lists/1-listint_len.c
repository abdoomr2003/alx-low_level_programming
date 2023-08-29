#include "lists.h"
/**
 * listint_len - number of elements in a linked listint_t list
 * @h: struct
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c = h;
	size_t num = 0;

	while (c != NULL)
	{
		num++;
		c = c->next;
	}
	return (num);
}
