#include "lists.h"

/**
 * print_list - function prints all elements of list_t list
 *
 *@w: const list_t pointet to head of list
 *
 * Return: number of nodes
 * 
 * WIlliam Mitiku
 */

size_t print_list(const list_t *w)
{
	int y;

	for (y = 0; w != NULL; y++)
	{
		if (w->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", w->len, w->str);
		}
		w = w->next;
	}
	return (x);
}
