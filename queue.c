#include "monty.h"
/**
 * f_queue - prints the queue
 * @head: stack head
 * @counter: line number
 * Return: 0
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}
/**
 * addqueue - adds node to tail
 * @n: value
 * @head: head of stack
 * Return: 0
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
