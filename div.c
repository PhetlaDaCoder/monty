#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _div - divides elements of stack.
 * @head: stack head
 * @count: line number
 * Return: Null
 */
void _div(stack_t **head, unsigned int count)
{
	stack_t *a;
	int len = 0, aux;

	a = *head;
	while (a)
	{
		a = a->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can;t divide, stack short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	if (a->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = a->next / a->n;
	a->next->n = aux;
	*head = a->next;
	free(a);
}
