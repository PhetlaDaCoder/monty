#include "monty.h"

/**
 * _push - adds node to stack
 * @head: head stack
 * @count: line counter
 * Return: Null
 */

void _push(stack_t **head, unsigned int count)
{
	int a, b = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			b++;
		for (; bus.arg[b] != '\0'; b++)
		{
			if (bus.arg[b] > 57 || bus.arg[b] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push interger\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	a = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, a);
	else
		addqueue(head, a);
}
