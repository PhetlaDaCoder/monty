#include "monty.h"

/**
 * free_stacl - frees doubly linked list.
 * @head: stack head.
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
