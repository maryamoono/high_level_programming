#include "lists.h"
/**
 * print_list - nhvbfg
 * @h: jnh
 * Return: nhvgcf
 */
size_t print_list(const list_t *h)
{
	unsigned int lemn = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d]%s\n", h->len, h->str);
		h = h->next;
		lemn++;
	}
	return (lemn);
}

