#include "sort.h"
/**
 * swap_nodes - cambia dos nodos en la dobly linked list
 * @list: Puntero a la head de la lista
 * @node1: primer nodo a cambiar
 * @node2: segundo nodo a cambiar
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;
	if (node2->next)
		node2->next->prev = node1;
	node1->next = node2->next;
	node2->next = node1;

	node2->prev = node1->prev;
	node1->prev = node2;

	print_list(*list);
}

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * using the Insertion sort algorithm.
 * @list: Pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !*list || !(*list)->next)
		return;
	current = (*list)->next;
	while (current)
	{
		temp = current->prev;
		while (temp && current->n < temp->n)
		{
			swap_nodes(list, temp, current);
			temp = current->prev;
		}
		current = current->next;
	}
}
